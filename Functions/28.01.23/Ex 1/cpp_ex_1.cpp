#include <iostream>
#include <ctime>
using namespace std;

int** Arr2Dint(int rows, int cols)
{
    int** mas = new int* [rows];
    for (int r = 0; r < rows; r++)
        mas[r] = new int[cols] {0};
    return mas;
}

double** Arr2Ddouble(double rows, double cols)
{
    double** mas = new double* [rows];
    for (int r = 0; r < rows; r++)
        mas[r] = new double[cols] {0};
    return mas;
}

char** Arr2Dchar(int rows, int cols) 
{
    char** mas = new char* [rows];
    for (int r = 0; r < rows; r++)
        mas[r] = new char[cols] {0};
    return mas;
}

void FillArray2Dint(int** arr, int n, int m, int a = 1, int b = 9)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = a + rand() % (b - a + 1);
}

void FillArray2Ddouble(double** arr, int n, int m, int a = 1, int b = 9)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = a + rand() % (b - a + 1) / static_cast<double>(rand() % 10 + 1);
}

void FillArray2Dchar(char** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = 97 + rand() % 26;
}

void PrintArray2Dint(int** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void PrintArray2Ddouble(double** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void PrintArray2Dchar(char** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void SortArray2Dint(int** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int index = j;
            int minElement = arr[i][j];
            for (int p = j; p < m; p++)
            {
                if (minElement > arr[i][p])
                {
                    index = p;
                    minElement = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][index]);
        }
    }
}

void SortArray2Ddouble(double** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int index = j;
            double minElement = arr[i][j];
            for (int p = j; p < m; p++)
            {
                if (minElement > arr[i][p])
                {
                    index = p;
                    minElement = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][index]);
        }
    }
}

void SortArray2Dchar(char** arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int index = j;
            int minElement = arr[i][j];
            for (int p = j; p < m; p++)
            {
                if (minElement > arr[i][p])
                {
                    index = p;
                    minElement = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][index]);
        }
    }
}

int MinElementArray2Dint(int** arr, int n)
{
    int min = arr[0][0];
    for (int i = 1; i < n; i++)
        if (min > arr[i][i])
            min = arr[i][i];
    return min;
}

double MinElementArray2Ddouble(double** arr, int n)
{
    double min = arr[0][0];
    for (int i = 1; i < n; i++)
        if (min > arr[i][i])
            min = arr[i][i];
    return min;
}

char MinElementArray2Dchar(char** arr, int n)
{
    int min = arr[0][0];
    for (int i = 1; i < n; i++)
        if (min > arr[i][i])
            min = arr[i][i];
    return min;
}

int MaxElementArray2Dint(int** arr, int n)
{
    int max = arr[0][0];
    for (int i = 1; i < n; i++)
        if (max < arr[i][i])
            max = arr[i][i];
    return max;
}

double MaxElementArray2Ddouble(double** arr, int n)
{
    double max = arr[0][0];
    for (int i = 1; i < n; i++)
        if (max < arr[i][i])
            max = arr[i][i];
    return max;
}

char MaxElementArray2Dchar(char** arr, int n)
{
    int max = arr[0][0];
    for (int i = 1; i < n; i++)
        if (max < arr[i][i])
            max = arr[i][i];
    return max;
}

void DeleteArray2Dint(int** arr, int n)
{
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;
}

void DeleteArray2Ddouble(double** arr, int n)
{
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;
}

void DeleteArray2Dchar(char** arr, int n)
{
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;
}

int main()
{
    // int
    int n = 4, m = n;
    int** arr = Arr2Dint(n, m);
    srand(time(0));
    FillArray2Dint(arr, n, m);
    cout << "Source array:\n";
    PrintArray2Dint(arr, n, m);
    SortArray2Dint(arr, n, m);
    cout << endl << endl;
    cout << "Sorted array:\n";
    PrintArray2Dint(arr, n, m);
    cout << endl << endl;
    cout << "Minimal element on the main diagonal of the matrix: " << MinElementArray2Dint(arr, n) << endl;
    cout << "Maximum element on the main diagonal of the matrix: " << MaxElementArray2Dint(arr, n) << endl;
    DeleteArray2Dint(arr, n);

    /*
    // double
    int n = 4, m = n;
    double** arr = Arr2Ddouble(n, m);
    srand(time(0));
    FillArray2Ddouble(arr, n, m);
    cout << "Source array:\n";
    PrintArray2Ddouble(arr, n, m);
    SortArray2Ddouble(arr, n, m);
    cout << endl << endl;
    cout << "Sorted array:\n";
    PrintArray2Ddouble(arr, n, m);
    cout << endl << endl;
    cout << "Minimal element on the main diagonal of the matrix: " << MinElementArray2Ddouble(arr, n) << endl;
    cout << "Maximum element on the main diagonal of the matrix: " << MaxElementArray2Ddouble(arr, n) << endl;
    DeleteArray2Ddouble(arr, n);
    */



    /*
    // char
    int n = 4, m = n;
    char** arr = Arr2Dchar(n, m);
    srand(time(0));
    FillArray2Dchar(arr, n, m);
    cout << "Source array (Char):\n";
    PrintArray2Dchar(arr, n, m);
    SortArray2Dchar(arr, n, m);
    cout << endl << endl;
    cout << "Sorted array (Char):\n";
    PrintArray2Dchar(arr, n, m);
    cout << endl << endl;
    cout << "Minimal element on the main diagonal of the matrix: " << MinElementArray2Dchar(arr, n) << endl;
    cout << "Maximum element on the main diagonal of the matrix: " << MaxElementArray2Dchar(arr, n) << endl;
    DeleteArray2Dchar(arr, n);
    */
}