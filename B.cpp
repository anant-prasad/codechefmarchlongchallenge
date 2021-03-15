#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                int j = i;
                while (j < n)
                {
                    if (s[j] == '0')
                        break;
                    else
                    {
                        j++;
                    }
                }
                ans++;
                i = j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}