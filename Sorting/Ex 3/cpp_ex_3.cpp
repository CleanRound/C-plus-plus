#include <iostream>
#include <cstdlib>
using namespace std;
void Set(int* arr, int a);
void Menu();
void Show(const int* arr, const int a);
void RetakeExam(int* arr, const int a);
void MaxAssessment(const int* arr, const int a);
void MinAssessment(const int* arr, const int a);
void AverageAssessment(const int* arr, const int a);
void Grant(const int* arr, const int a);
void ExitMenu();
const int SIZE = 10;

int main()
{
    int assessment[SIZE];
    Set(assessment, SIZE);
    Menu();
    int choice;
    while (true)
    {
        while (!(cin >> choice))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Wrong menu option, please enter it again: ";
        }
        switch (choice)
        {
        case 1:Show(assessment, SIZE);
            break;
        case 2:RetakeExam(assessment, SIZE);
            break;
        case 3:MaxAssessment(assessment, SIZE);
            break;
        case 4:MinAssessment(assessment, SIZE);
            break;
        case 5:AverageAssessment(assessment, SIZE);
            break;
        case 6:Grant(assessment, SIZE);
            break;
        case 7:ExitMenu();
            break;
        }
    }

    return 0;
}

void Set(int* arr, int a)
{
    cout << "Enter the student's grades:\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Grade " << i + 1 << ": ";
        while (!(cin >> arr[i]) || arr[i] > 12)
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Wrong, enter the value " << i + 1 << " of a grade: ";
        }
    }
    system("cls");
}

void Menu()
{
    cout << "Menu options\n";
    cout << "1. Print grades\n";
    cout << "2. Retake the exam\n";
    cout << "3. The maximum student's grade\n";
    cout << "4. The mainimal student's grade\n";
    cout << "5. Average score\n";
    cout << "6. Scholarship availability\n";
    cout << "7. Exit\n";
}

void Show(const int* arr, const int a)
{
    system("cls");
    for (int i = 0; i < a; i++)
    {
        cout << "grade " << i + 1 << ": " << arr[i] << endl;
    }
    cout << endl;
    Menu();
}

void RetakeExam(int* arr, const int a)
{
    system("cls");
    cout << "Select the grade that you want to fix: ";
    int element;
    while (!(cin >> element) || element > SIZE)
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Wrong, enter the number of the grade again: ";
    }
    cout << "Assign a new value:";
    while (!(cin >> arr[element - 1]) || arr[element - 1] > 12)
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Wrong, enter the grade again: ";
    }
    cout << endl;
    Menu();
}

void MaxAssessment(const int* arr, const int a)
{
    system("cls");
    int max = 1;
    for (int i = 0; i < a; i++)
        max = max < arr[i] ? arr[i] : max;
    cout << "The maximum grade: " << max << endl;
    cout << endl;
    Menu();
}

void MinAssessment(const int* arr, const int a)
{
    system("cls");
    int max = 12;
    for (int i = 0; i < a; i++)
        max = max > arr[i] ? arr[i] : max;
    cout << "The minimal grade: " << max << endl;
    cout << endl;
    Menu();
}

void AverageAssessment(const int* arr, const int a)
{
    system("cls");
    double average = 0;
    int sum = 0;
    for (int i = 0; i < a; i++)
        sum += arr[i];
    average = double(sum) / a;
    cout << "Average score:" << average << endl;
    cout << endl;
    Menu();
}

void Grant(const int* arr, const int a)
{
    system("cls");
    double average = 0;
    int sum = 0;
    for (int i = 0; i < a; i++)
        sum += arr[i];
    average = double(sum) / a;
    if (average >= 10.7)
    {
        cout << "The scholarship is available to you\n";
        cout << endl;
        Menu();
    }
    else
    {
        cout << "The scholarship isn't available to you\n";
        cout << endl;
        Menu();
    }
}

void ExitMenu()
{
    exit(0);
}