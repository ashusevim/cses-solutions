#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll total = (n * (n + 1)) / 2;
    ll given_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        given_sum += x;
    }
    cout << total - given_sum;
}