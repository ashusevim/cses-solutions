#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            ll ans = (a - 1) * (a - 1);

            if (a % 2 == 0)
            {
                ans += (2 * a - b);
            }
            else
            {
                ans += b;
            }
            cout << ans << endl;
        }
        else
        {
            ll ans = (b - 1) * (b - 1);

            if (b % 2 == 0)
            {
                ans += a;
            }
            else
            {
                ans += (2 * b - a);
            }
            cout << ans << endl;
        }
    }
}