#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    } 
    int max_customers = 0;
    int curr_customers = 0;
    for(auto i:mp){
        curr_customers = curr_customers + i.second;
        max_customers = max(max_customers, curr_customers);
    }
    cout << max_customers << '\n';
}