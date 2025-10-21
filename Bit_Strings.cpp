#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a = 1;
    // ll m = 10 ^ 9 + 7;
    // cout << ans % 1000000007;
    for (int i = 1; i <= n; i++)
    {
        a = ((a % 1000000007) * (2 % 1000000007)) % 1000000007;
        // cout << a << " ";
    }
    cout << a;
}