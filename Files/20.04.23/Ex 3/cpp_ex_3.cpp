#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

int main() {
    const int NUM_PRODUCTS = 5;
    Product products[NUM_PRODUCTS] = {
        {"Hoodie", 20, 15.99},
        {"Jeans", 15, 29.99},
        {"Sneakers", 30, 59.99},
        {"Jacket", 5, 89.99},
        {"Hat", 12, 12.99}
    };

    ofstream outFile("products.txt");
    if (outFile.is_open()) {
        for (int i = 0; i < NUM_PRODUCTS; i++) {
            outFile << products[i].name << " ";
            outFile << products[i].quantity << " ";
            outFile << products[i].price << endl;
        }
        outFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ifstream inFile("products.txt");
    if (inFile.is_open()) {
        string name;
        int quantity;
        double price;
        while (inFile >> name >> quantity >> price) {
            if (quantity > 10) {
                cout << name << " ";
                cout << quantity << " ";
                cout << price << endl;
            }
        }
        inFile.close();
    }
    else {
        cout << "Unable to open file." << endl;
        return 1;
    }

    return 0;
}
