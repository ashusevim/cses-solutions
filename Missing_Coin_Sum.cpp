#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];
    sort(v.begin(), v.end());
    long long value = 1;
    for(int i = 0; i<n; ++i){
        if(v[i] > value){
            cout << value;
            return 0;
        }
        value = value +  v[i];
    }
    cout << value << '\n';
}
