#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> ticket(n), customers(m);
    for(int i = 0; i<ticket.size(); ++i)cin >> ticket[i];
    for(int i = 0; i<customers.size(); ++i)cin >> customers[i];
    int i = 0, j = 0;
    vector<bool> oc(n, false);
    while(i < n || j < m){
        int maxPrice = customers[j];
        if(ticket[i] <= maxPrice){
            cout << ticket[i] << '\n';
            i++;
            j++;
        }
        else if(ticket[i]){

        }
    }    
}

// 3 5 5 7 8
// 4 8 3