#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int max_len = 1;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            temp++;
            max_len = max(max_len, temp);
        }
        else
        {
            temp = 1;
        }
    }
    cout << max_len;
}