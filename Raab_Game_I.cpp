#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        if(a + b > n || (n == 2 && a + b == 1)){
            cout << "NO" << '\n';
        }
        else{
            vector<int> v;
            cout << "YES" << '\n';
            for(int i = 1; i<=n; i++){
                cout << i << " ";
                v.push_back(i);
            }
            cout << '\n';
            a = a%n;
            reverse(v.begin(), v.end());
            reverse(v.begin(), v.begin()+a);
            reverse(v.begin()+a, v.end());
            
            for(auto i:v)cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}