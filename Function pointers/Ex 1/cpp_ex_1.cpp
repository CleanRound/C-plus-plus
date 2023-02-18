#include <iostream>
#include <functional>
using namespace std;

double maxFunc(double* A, int sizeA, double* B, int sizeB)
{
    double max = A[0];
    for (int i = 1; i < sizeA; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    for (int i = 0; i < sizeB; i++)
    {
        if (B[i] > max)
        {
            max = B[i];
        }
    }
    return max;
}

double minFunc(double* A, int sizeA, double* B, int sizeB)
{
    double min = A[0];
    for (int i = 1; i < sizeA; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    for (int i = 0; i < sizeB; i++)
    {
        if (B[i] < min)
        {
            min = B[i];
        }
    }
    return min;
}

double avgFunc(double* A, int sizeA, double* B, int sizeB)
{
    double sum = 0;
    for (int i = 0; i < sizeA; i++)
    {
        sum += A[i];
    }

    for (int i = 0; i < sizeB; i++)
    {
        sum += B[i];
    }
    return sum / (sizeA + sizeB);
}

double Action(double* A, int sizeA, double* B, int sizeB, function<double(double*, int, double*, int)> func)
{
    return func(A, sizeA, B, sizeB);
}

int main()
{
    int sizeA, sizeB;
    cout << "Enter the size of array A: ";
    cin >> sizeA;
    double* A = new double[sizeA];
    cout << "Enter the elements of array A: ";
    for (int i = 0; i < sizeA; i++)
    {
        cin >> A[i];
    }

    cout << "Enter the size of array B: ";
    cin >> sizeB;
    double* B = new double[sizeB];
    cout << "Enter the elements of array B: ";
    for (int i = 0; i < sizeB; i++)
    {
        cin >> B[i];
    }

    int choice;
    do {
        cout << "Choose an option\n";
        cout << "1. Maximum\n";
        cout << "2. Minimum\n";
        cout << "3. Average\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Maximum is: " << Action(A, sizeA, B, sizeB, maxFunc) << endl << endl;
            break;
        case 2:
            cout << "Minimum is: " << Action(A, sizeA, B, sizeB, minFunc) << endl << endl;
            break;
        case 3:
            cout << "Average is: " << Action(A, sizeA, B, sizeB, avgFunc) << endl << endl;
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please choose again.\n";
            break;
        }
    } while (choice != 4);
}