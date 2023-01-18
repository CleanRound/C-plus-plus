#include <iostream>
using namespace std;

int count_same_digit(int x, int y)
{
    int temp = 0, ans = 0;
    int n = log10(y) + 1;

    for (int i = 0; i < n; i++)
    {

        temp = temp * 10 + 1;

        for (int j = 1; j <= 10; j++) {

            if (x <= (temp * j)
                && (temp * j) <= y) {

                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int x = 100, y = 999;

    cout << count_same_digit(x, y) << endl;
    return 0;
}