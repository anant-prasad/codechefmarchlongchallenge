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
#define log(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> p, s;
        loop(i, 0, n - 1)
        {
            ll x;
            cin >> x;
            p.push_back({i + 1, x});
        }
        if (n == 2)
        {
            cout << 1 << endl;
            continue;
        }
        s.push_back(p[0]);
        s.push_back(p[1]);
        ll ans = 1, sz = s.size();
        loop(i, 2, n - 1)
        {
            while (s.size() >= 2)
            {
                double s1 = ((double)s[sz - 1].second - (double)s[sz - 2].second) / ((double)s[sz - 1].first - (double)s[sz - 2].first);
                double s2 = ((double)p[i].second - (double)s[sz - 1].second) / ((double)p[i].first - (double)s[sz - 1].first);
                if (s1 <= s2)
                {
                    s.pop_back();
                    sz--;
                }
                else
                    break;
            }
            s.push_back(p[i]);
            sz++;
            ans = max(ans, s[sz - 1].first - s[sz - 2].first);
        }
        cout << ans << endl;
    }
    return 0;
}