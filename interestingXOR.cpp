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

string to_binary(ll n)
{
    string s = bitset<64>(n).to_string();
    const auto loc1 = s.find('1');

    if (loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

int main(int argc, char const *argv[])
{
    // file_i_o();
    int t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;
        string s;
        ll j, b, a;
        s = to_binary(c);
        j = s.length();
        for (int i = 1; i < j; i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
            }
            else if (s[i] == '1')
            {
                s[i] = '0';
            }
        }
        a = stoi(s, 0, 2);

        b = a ^ c;
        cout << a * b << "\n";
    }
    return 0;
}