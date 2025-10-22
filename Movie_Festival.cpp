#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<pair<long long, long long>> pr(n);
    for(int i = 0; i<n; i++){
        cin >> pr[i].second >> pr[i].first; 
    }
    sort(pr.begin(), pr.end());
    int current = 0;
    int movies = 0;
    for(int i = 0; i<n; i++){
        int start_time = pr[i].second;
        int end_time = pr[i].first;

        if(start_time >= current){
            movies++;
            current = end_time;
        }
    }
    cout << movies << '\n';
}