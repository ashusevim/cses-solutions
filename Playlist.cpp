#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; ++i){
        cin >> v[i];
    }
    map<int, int> mp;
    int left = 0, right = 0;
    int ans = 0;
    while(left < n && right < n){
        mp[v[right]]++;

        while(mp[v[right]] > 1){
            mp[v[left]]--;
            left++;
        }

        ans = max(ans, right - left + 1);
        right++;
    }   
    cout << ans << '\n';
}