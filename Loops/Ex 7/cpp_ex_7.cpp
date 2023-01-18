#include <iostream>
#include <cmath>

using namespace std;

int count_Unique_Digits_numbers(int n) {
    if (n == 0)
    {
        return 1;
    }

    int ctr = 0;
    for (int k = 2, fk = 8; k <= n; ++k)
    {
        fk *= 10 - (k - 1);
        ctr += fk;
    }
    return ctr;
}

int main()
{
    int n = 3;
    cout << "Number of unique digits: " << count_Unique_Digits_numbers(n) << endl;
    return 0;
}