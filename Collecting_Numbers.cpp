#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i<n; ++i)cin >> v[i];
    long long rounds = 0;
    for(int i = 0; i<n; i++){
        bool swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                swapped = true;
            }   
        }
        if(swapped == false)break;
        rounds++;
    }
    cout << rounds << '\n';
}
