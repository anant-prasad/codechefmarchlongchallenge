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