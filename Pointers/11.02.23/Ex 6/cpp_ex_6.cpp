#include <iostream>
#include <cstring>
using namespace std;

int* isSubset(int* A, int* B, int sizeA, int sizeB)
{
    int i = 0, j = 0;
    while (i < sizeA && j < sizeB)
    {
        if (A[i] == B[j])
        {
            j++;
        }
        i++;
    }
    if (j == sizeB)
    {
        return A + (i - sizeB);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int A[] = { 1, 2, 3, 4, 5, 6 };
    int B[] = { 2, 3, 4 };
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int* result = isSubset(A, B, sizeA, sizeB);
    if (result != 0)
    {
        cout << "Array B is a subset of Array A, starting from index " << result - A << endl;
    }
    else
    {
        cout << "Array B is not a subset of Array A" << endl;
    }
    return 0;
}