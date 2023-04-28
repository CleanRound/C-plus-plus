#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct File
{
    fstream file;
    string path;
    bool isBinary;

    File() {
        this->path = "file.txt";
        this->isBinary = false;
    }

    File(bool isBinary) {
        this->isBinary = isBinary;
        this->path = "file.dat";
    }

    File(string path, bool isBinary) {
        this->path = path;
        this->isBinary = isBinary;
    }

    bool is_open() {
        return this->file.is_open();
    }

    void open_file(ios_base::openmode mode) {
        if (this->isBinary) {
            this->file.open(this->path, mode | ios::binary);
        }
        else {
            this->file.open(this->path, mode);
        }
        if (!this->file.is_open()) {
            cout << "Error opening file " << this->path << endl;
        }
    }

    void close_file() {
        this->file.close();
    }

    template<typename T>
    void save_to_file(const vector<T>& data) {
        this->open_file(ios::out | ios::trunc);
        if (this->is_open()) {
            for (const auto& item : data) {
                this->file << item << endl;
            }
            this->close_file();
        }
    }

    template<typename T>
    void read_from_file(vector<T>& data) {
        this->open_file(ios::in);
        if (this->is_open()) {
            T item;
            while (this->file >> item) {
                data.push_back(item);
            }
            this->close_file();
        }
    }
};

int main() {
    File textFile("file.txt", false);
    vector<string> textData{ "Hello", "world!", };
    textFile.save_to_file(textData);

    vector<string> readTextData;
    textFile.read_from_file(readTextData);
    for (const auto& item : readTextData) {
        cout << item << " ";
    }
    cout << endl;

    File binaryFile("file.bin", true);
    vector<int> binaryData{ 1, 2, 3, 4, 5 };
    binaryFile.save_to_file(binaryData);

    vector<int> readBinaryData;
    binaryFile.read_from_file(readBinaryData);
    for (const auto& item : readBinaryData) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
