/*Author: Hasib; Date:09/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<string, int> &a, const pair<string, int> &b) { return (a.second < b.second); }
// int a[50];
void solve()
{
    //*[START]*//
    ll n, x = 0, y = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> temp, temp2, res;
    res = v;
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] != v[n - i - 1])
        {
            y = v[i];
            x = v[n - 1 - i];
            break;
        }
    }
    // cout << x << '\n';
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == x)
            continue;
        else
            temp.push_back(v[i]);
    }
    // for (auto i : v)
    //     cout << i << " ";
    int sz = temp.size();
    bool f = true;
    // cout << sz << '\n';
    for (int i = 0; i < sz / 2; i++)
    {
        if (temp[i] != temp[sz - 1 - i])
        {
            f = false;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (res[i] == y)
            continue;
        else
        {
            temp2.push_back(res[i]);
        }
    }
    int sz1 = temp2.size();
    bool b = true;
    // cout << sz << '\n';
    for (int i = 0; i < sz1 / 2; i++)
    {
        if (temp2[i] != temp2[sz1 - 1 - i])
        {
            b = false;
            break;
        }
    }
    if (b or f)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}