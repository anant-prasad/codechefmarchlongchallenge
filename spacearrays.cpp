#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pb emplace_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define logarr(arr, a, b)            \
    for (int z = (a); z <= (b); z++) \
        cout << (arr[z]) << " ";     \
    cout << endl;

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
    // file_i_o();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // for (int i = 0; i < n; i++)
        //     cout << a[i];
        sort(a, a + n);
        bool flag = false;
        // for (int i = 0; i < n; i++)
        //     cout << a[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= (i + 1))
            {
                sum += abs(a[i] - (i + 1));
            }
            else if (a[i] > (i + 1))
            {
                flag = true;
                break;
            }
        }
        if (sum & 1 && sum > 0 && !flag)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}