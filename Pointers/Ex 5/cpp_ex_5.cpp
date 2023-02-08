#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    int* size = new int(0);
    int i, s = 0;
    int* ptr;

    cout << "Enter the size of an array: ";
    cin >> *size;

    int* arr = new int[*size];
    for (size_t i = 0; i < *size; i++)
    {
        *(arr + i) = rand() % 50;
        cout << *(arr + i) << " ";
    }

    ptr = arr;
    for (i = 0; i < *size; i++)
    {
        s = s + *(ptr + i);
    }
    cout << "\n\nSum of the elements in an array: " << s << endl;
}