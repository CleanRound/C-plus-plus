#include <iostream>
using namespace std;

int main()
{
    float sum = 0;

    for (int i = 1; i <= 1000; i++)
        sum = sum + i;
    float average = sum / 1000;

    cout << "The arithemic mean is " << average;

    return 0;
}