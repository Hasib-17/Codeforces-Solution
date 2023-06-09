/*Author: Hasib; Date:06/01/23*/
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
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    ll n;
    cin >> n;
    vector<int> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    if (mp.size() == 1 && n > 1)
    {
        cout << "NO\n";
        return;
    }
    else if (n == 1)
    {
        cout << "YES\n";
        cout << v[0] << '\n';
        return;
    }
    else
    {
        sort(all(v));
        reverse(all(v));
        int j = n - 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
            {
                swap(v[i], v[j]);
                j--;
            }
        }
        cout << "YES\n";
        for (auto i : v)
            cout << i << " ";
        cout << '\n';
    }
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