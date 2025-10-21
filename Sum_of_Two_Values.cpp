#include <bits/stdc++.h>
using namespace std;

// author: ashusevim

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        int target = x - v[i];
        if (mp.find(target) != mp.end()){
            cout << mp[target] << " " << i+1 << '\n';
            return 0; break;
        }
        else{
            mp[v[i]] = i+1;
        }
    }
    cout << "IMPOSSIBLE" << '\n';
}