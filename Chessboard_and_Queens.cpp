#include<bits/stdc++.h>
using namespace std;

int main(){
    char board[8][8];
    vector<pair<int, int>>stars; 
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            cin >> board[i][j];
            char c = board[i][j];
            if(c == '*'){
                stars.push_back({i, j});
            }
        }
    }
    
    for(auto i:stars){
        int in = i.first;
        int jn = i.second; 
        board[in][jn+1] = board[i.first][i.second];
        board[in][jn-1] = board[i.first][i.second];
        board[in+1][jn] = board[i.first][i.second];
        board[in-1][jn] = board[i.first][i.second];
        board[in+1][jn+1] = board[i.first][i.second];
        board[in+1][jn-1] = board[i.first][i.second];
        board[in-1][jn-1] = board[i.first][i.second];
        board[in-1][jn+1] = board[i.first][i.second];
    }
    int cnt = 0;
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            char c = board[i][j];
            if(c == '.'){
                cnt++;
            }
            // cout << board[i][j];

        }
        // cout << '\n';
    }

    cout << cnt;

    /* 
        operations to be done:
        1. i, j+1
        2. i, j-1
ihdfkhd        3. i-1, j
        4. i+1, j
        5. i+1, j+1
        6. i-1, j-1
        7. i+1, j-1
        8. i-1, j+1
    */
}
