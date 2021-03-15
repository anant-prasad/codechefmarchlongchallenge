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
        ll n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c; //input taken
        ll ans = inf;                      //prize set to inf

        for (ll i = 0; i <= n; i++) //iterating number of cakes
        {
            ll cake = min(h, e); //max pos cakes
            if (cake < i)
                break; //cant use such cakes so break the loop
            else
                cake = i;      //set cake to i
            ll res = cake * c; //prize of choc cake

            ll left = n - cake; //friends left

            ll omlet = min(left, (e - cake) / 2); //max omlet pos
            ll choc = left - omlet;               //left choc to make
            ll res1 = choc * b + omlet * a;       //prize of omlet and choclate
            if (choc * 3 > (h - cake))
                res1 = inf; //if unable to make such cake

            //sim for choc
            choc = min(left, (h - cake) / 3);
            omlet = (left - choc);

            ll res2 = choc * b + omlet * a;
            if (omlet * 2 > e - cake)
                res2 = inf;
            ans = min(ans, res + min(res1, res2));
        }
        if (ans == inf)
            cout << -1 << endl;
        else
            cout << ans << endl;
        return 0;
    }