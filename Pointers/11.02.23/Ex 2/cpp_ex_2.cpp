#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Enter the size of the first array: ";
    size_t n1;
    cin >> n1;

    cout << "Enter the size of the second array: ";
    size_t n2;
    cin >> n2;

    int* a1 = new int[n1];

    cout << "\nFirst  array: ";
    for (size_t i = 0; i < n1; i++)
    {
        a1[i] = std::rand() % 10;
        std::cout << a1[i] << " ";
    }
    cout << '\n';

    int* a2 = new int[n2];

    cout << "Second array: ";
    for (size_t i = 0; i < n2; i++)
    {
        a2[i] = rand() % 10;
        cout << a2[i] << " ";
    }
    cout << '\n';

    size_t n3 = 0;

    for (size_t i = 0; i < n1; i++)
    {
        size_t count = 1;

        for (size_t j = 0; j < i; j++)
        {
            if (a1[j] == a1[i]) ++count;
        }

        for (size_t j = 0; count != 0 && j < n2; j++)
        {
            if (a2[j] == a1[i]) --count;
        }

        if (count == 0) ++n3;
    }

    int* a3 = new int[n3];

    size_t m = 0;

    for (size_t i = 0; i < n1; i++)
    {
        size_t count = 1;

        for (size_t j = 0; j < i; j++)
        {
            if (a1[j] == a1[i]) ++count;
        }

        for (size_t j = 0; count != 0 && j < n2; j++)
        {
            if (a2[j] == a1[i]) --count;
        }

        if (count == 0) a3[m++] = a1[i];
    }

    cout << "The common elements: ";

    for (size_t i = 0; i < n3; i++)
    {
        cout << a3[i] << " ";
    }
    cout << '\n';

    delete[] a3;
    delete[] a2;
    delete[] a1;
}