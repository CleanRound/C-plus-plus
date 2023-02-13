#include <iostream>
#include <ctime>
using namespace std;

void SumMult(int* arr, int size, int* summ, int* mult)
{
    for (int i = 0; i < size; i++)
    {
        *summ += *(arr + i);
    }
    cout << "Sum: " << *summ << endl;
    for (int j = 0; j < size; j++)
    {
        *mult *= *(arr + j);
    }
    cout << "Mult: " << *mult << endl;
}

int main()
{
    srand(time(0));
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int* arr = new int[size];
    int summ = 0, multi = 1;
    int* psumm = &summ;
    int* pmulti = &multi;
    system("cls");

    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 50;
        cout << arr[i] << " ";
    }
    cout << endl;
    int* pa = &arr[0];
    SumMult(pa, size, psumm, pmulti);

    return 0;
}