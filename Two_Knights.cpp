#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll totalPositions = ((long)i * i * (i * i - 1)) / 2;
        ll attackPositions = 4 * (i - 1) * (i - 2);
        cout << totalPositions - attackPositions << endl;
    }
}