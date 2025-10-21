#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n <= 9)
        {
            cout << n << '\n';
        }
        else if ((n > 9) && (n <= 180))
        {
            int num = ((n - 9) / 2) + 10;
            if (n % 2 == 0)
            {
                cout << num / 10 << '\n';
            }
            else
            {
                cout << (num % 10) - 1 << '\n';
            }
        }
        else{
            int num = ((n - 99) / 2) + 100;
            if (n % 2 == 0)
            {
                cout << num / 100 << '\n';
            }
            else
            {
                cout << (num % 100) - 1 << '\n';
            }
        }
    }
}
