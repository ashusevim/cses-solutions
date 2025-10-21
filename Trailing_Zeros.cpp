#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n)
{
    cout << n << " ";
    if (n == 0)
    {
        return 0;
    }
    return n / 5 + solve(n / 5);
}

int main()
{
    ll n;
    cin >> n;
    // cout << ((n / 5) / 5) / 5;
    // ll ans = solve(n);
    // cout << ans;
    ll ans = 0;
    while (n > 0)
    {
        // ans += n / 5;
        // cout << ans << " ";
        // n = n / 5;
        ans += n / 5;
        n = n/5;
    }
    cout << ans;
}