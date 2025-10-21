#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    set<int> s;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
}