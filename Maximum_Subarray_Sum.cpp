#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];
    long long current_sum = 0;
    long long max_sum = LONG_MIN;
    for(int i = 0; i<n; ++i){
        current_sum += v[i];
        max_sum = max(max_sum, current_sum);
        if(current_sum < 0)current_sum = 0;
    } 
    cout << max_sum << '\n';
}