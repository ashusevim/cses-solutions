#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n;
    }
    else if (n <= 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        vector<int> odd, even, ans;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        if (n % 2 == 0)
        {
            for (auto i : even)
            {
                ans.push_back(i);
            }
            for (auto i : odd)
            {
                ans.push_back(i);
            }
            for (auto i : ans)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (auto i : odd)
            {
                ans.push_back(i);
            }
            for (auto i : even)
            {
                ans.push_back(i);
            }

            for (auto i : ans)
            {
                cout << i << " ";
            }
        }
    }
}