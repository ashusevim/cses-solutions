#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n), appartments(m);
    for (int i = 0; i < n; i++)cin >> applicants[i];
    for (int i = 0; i < m; i++)cin >> appartments[i];
    sort(applicants.begin(), applicants.end());
    sort(appartments.begin(), appartments.end());
    int cnt = 0;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(appartments[j] < applicants[i] - k)j++;
        else if(appartments[j] > applicants[i] + k)i++;
        else if(appartments[j] >= (applicants[i] - k) && appartments[j] <= (applicants[i] + k)){
            i++;j++;cnt++;
        }
    }
    cout << cnt;
}

// 45 60 60 80
// 30 60 75