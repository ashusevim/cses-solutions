#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll N;
    cin >> N;
    vector<ll>v;
    for(ll i = 0; i<N; i++){
        ll x;cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    ll A = 0, B = 0;
    A += v[0];

    for(ll i = 1; i<N; i++){
        if(B < A){
            B += v[i];
        }
        else{
            A += v[i];
        }
        cout << A << " " << B;
    }

    // cout << (max(A, B) - min(A, B)) ;
    // cout << (total - (maxi + mini)) - (maxi+mini);
}