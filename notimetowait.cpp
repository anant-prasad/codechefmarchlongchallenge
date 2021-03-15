#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    // }
    int N, H, x;
    cin >> N >> H >> x;
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];
    int time_req = abs(x - H);
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        if (a[i] >= time_req)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}