#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    if (((n * n) + n) % 4 == 0)
    {
        vector<int> v1, v2;
        bool flag = false;
        for (int i = n; i > 1; i -= 2)
        {
            if (flag == true)
            {
                v2.push_back(i);
                v1.push_back(i - 1);
                flag = false;
            }
            else
            {
                v1.push_back(i);
                v2.push_back(i - 1);
                flag = true;
            }
        }
        int s1 = 0;
        int s2 = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            s1 += v1[i];
        }
        for (int i = 0; i < v2.size(); i++)
        {
            s2 += v2[i];
        }

        if (s2 < s1)
        {
            v2.push_back(1);
        }
        else if (s1 < s2)
        {
            v1.push_back(1);
        }
        cout << "YES" << '\n';
        cout << v1.size() << '\n';
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << '\n';
        cout << v2.size() << '\n';
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
    }
    else
    {
        cout << "NO";
    }
}