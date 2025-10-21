/*
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.
Input
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.
Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.
Constraints

1 \le t \le 10^5
0 \le a, b \le 10^9

Example
Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES

why this works always - if(2*a >= b && 2*b >= a)
*/

#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test-- > 0){
        int a, b;
        cin >> a >> b;
        if((a+b)%3 == 0 && 2*a >= b && 2*b >= a){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
