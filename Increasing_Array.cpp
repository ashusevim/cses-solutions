#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll moves = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (v[i + 1] < v[i])
            {
                int increase = (v[i] - v[i + 1]);
                v[i + 1] += increase;
                moves += increase;
            }
        }
    }
    cout << moves;
}