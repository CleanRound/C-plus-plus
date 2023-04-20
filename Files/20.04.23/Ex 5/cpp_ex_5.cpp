#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Book {
    string author;
    string title;
    int year;
    int numPages;
};

int main() {
    const int NUM_BOOKS = 5;
    Book books[NUM_BOOKS] = {
        {"J.K. Rowling", "Harry Potter and the Philosopher's Stone", 1997, 223},
        {"J.R.R. Tolkien", "The Fellowship of the Ring", 1954, 423},
        {"Dan Brown", "The Da Vinci Code", 2003, 689},
        {"George R.R. Martin", "A Game of Thrones", 1996, 694},
        {"Harper Lee", "To Kill a Mockingbird", 1960, 281}
    };

    ofstream outFile("books.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_BOOKS; i++) {
            outFile << books[i].author << ",";
            outFile << books[i].title << ",";
            outFile << books[i].year << ",";
            outFile << books[i].numPages << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("books.txt");
    if (inFile.is_open()) {
        string author, title;
        int year, numPages;
        char comma;
        while (getline(inFile, author, ',') && getline(inFile, title, ',') && (inFile >> year) && (inFile >> comma) && (inFile >> numPages)) {
            if (year > 2000) {
                cout << title << " by " << author << " (" << year << ")" << endl;
            }
            inFile.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    return 0;
}
