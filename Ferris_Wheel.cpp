#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++)cin >> v[i];
    sort(v.begin(), v.end());
    int low = 0, high = n-1;
    int count = 0;
    while(low <= high){
        int total = v[low] + v[high];
        if(total > k){
            count++;
            high--;
            total = total - v[high];
        }
        else{
            count++;
            low++;
            high--;
            total = 0;
        }
    }
    cout << count;
    
    
}
// 2 3 7 9