#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];
    multiset<int> towers;
    for(int i = 0; i<n; ++i){
        auto it = towers.upper_bound(v[i]);
        if(it == towers.end()){
            towers.insert(v[i]);
        }
        else{
            towers.erase(it);
            towers.insert(v[i]);
        }
    }
    cout << towers.size() << '\n';
}