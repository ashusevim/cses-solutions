#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        #how to
        cin >> a >> b;
        if (a % 3 == 0 && b % 3 == 0 || (a + b) % 3 == 0 && a != 0 && b != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
