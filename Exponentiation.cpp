#include<bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long base, expo;
        cin >> base >> expo;
        long long ans = 1;
        base = base % MOD;
        while(expo > 0){
            if(expo & 1){
                ans = (ans * base) % MOD;
            }
            base = (base*base) % MOD;
            expo = expo >> 1;
        }
        // cout << ans << '\n';
    }
}