#include <bits/stdc++.h>
#define nn "\n"
#define ll long long
#define pb push_back
#define pll pair<ll, ll>
#define vll vector<ll>
#define all(_obj) _obj.begin(), _obj.end()
#define fr(x, y) for (ll x = 0; x < y; x++)
#define nach_basanti                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define inp(x) \
    ll x;      \
    cin >> x;
#define inpv(v, n) \
    vll v(n);      \
    fr(i, n) cin >> v[i];
#define printv(v) fr(i, v.size()) cout << v[i] << " ";
#define yes cout << "YES"
#define no cout << "NO"
#define home return;
const ll mod = 1e9 + 7;
using namespace std;
#define ll long long
ll radix = 29;
ll mod = 1e9 + 7;
ll maxwt = 1;
ll hashVal(string &s, ll &m)
{
    ll val = 0, wt = 1;
    for (int i = m - 1; i >= 0; i--)
    {
        val = (val % mod + ((s[i] - 'a') * wt) % mod) % mod;
        wt = (wt * radix) % mod;
    }
    return val % mod;
}
void prepare(vector<ll> &arr, string &a, string &s)
{
    ll maxwt = 1;
    ll n = s.size();
    ll m = a.size();
    for (int i = 0; i < m; i++)
        maxwt = (maxwt * radix) % mod;
    ll hashA = hashVal(a, m);
    ll hashS = 0;
    for (int i = 0; i <= n - m; i++)
    {
        if (i == 0)
        {
            hashS = hashVal(s, m);
        }
        else
        {
            hashS = ((hashS * radix) % mod + mod - ((s[i - 1] - 'a') * maxwt) % mod + (s[i + m - 1] - 'a')) % mod;
        }
        if (hashS == hashA)
            arr.push_back(i);
    }
}
void solve()
{
}
int32_t main()
{
    nach_basanti;
    inp(t);
    fr(i, t)
    {
        solve();
        cout << nn;
    }
    return 0;
}