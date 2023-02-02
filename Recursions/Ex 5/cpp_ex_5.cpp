#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

double Max(double* a, int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max) max = a[i];
    return max;
}

double Max(double** a, int size)
{
    int max = a[0][0];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (a[i][j] > max) max = a[i][j];
    return max;
}

int Max(int*** a, int size)
{
    int max = a[0][0][0];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            for (int k = 0; k < size; k++)
                if (a[i][j][k] > max) max = a[i][j][k];
    return max;
}

void Max(int n, int m)
{
    cout << "The biggest number between " << n << " and " << m << " is: " << max(n, m) << endl;
}

void Max(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << "The biggest number between " << num1 << ", " << num2 << " and " << num3 << " is: " << num1;
    }

    else if (num2 > num1 && num2 > num3)
    {
        cout << "The biggest number between " << num1 << ", " << num2 << " and " << num3 << " is: " << num2;
    }

    else
    {
        cout << "The biggest number between " << num1 << ", " << num2 << " and " << num3 << " is: " << num3;
    }
}


int main()
{
    srand(time(0));
    double size = 10;
    double size_2D = 5;
    double size_3D = 1;
    int n, m;
    int num1, num2, num3;
    int x = 2, y = 3, z = 4;
    int count = 0;

    cout << "Enter the two numbers you want to compare: " << endl;
    cin >> n;
    cin >> m;
    system("cls");

    cout << "Enter the three numbers you want to compare: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    system("cls");

    Max(n, m);
    cout << endl;

    Max(num1, num2, num3);
    cout << endl << endl;

    double* A = new double[size];

    cout << "array A:\n";
    for (int i = 0; i < size; i++)
    {
        A[i] = rand() % 50;
        cout << A[i] << " ";
    }
    cout << "\nmax=" << Max(A, size) << "\n\n";

    double** B = new double* [size_2D];
    for (int i = 0; i < size_2D; i++)
        B[i] = new double[size_2D];

    cout << "array B:\n";
    for (int i = 0; i < size_2D; i++)
    {
        for (int j = 0; j < size_2D; j++)
        {
            B[i][j] = rand() % 30;
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "max=" << Max(B, size_2D) << "\n\n\n";

    int* C = new int [x * y * z];

    cout << "array C:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                *(C + i * y * z + j * z + k) = ++count;
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << *(C + i * y * z + j * z + k) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    delete[]A;
    for (int i = 0; i < size_2D; i++)
        delete[]B[i];
    delete[]B;
    delete[]C;

    return 0;
}