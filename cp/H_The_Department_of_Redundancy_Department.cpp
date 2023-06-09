/*Author: Hasib; Date:11/12/22*/
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
    int x, i = 0, fr = 0;
    map<int, int> mp;
    vector<int> v;
    while (cin >> x)
    {
        if (i == 0)
            fr = x;
        v.push_back(x);
        i++;
        mp[x]++;
    }
    cout << fr << ' ' << mp[fr] << '\n';
    mp[fr] = 0;
    for (auto i : v)
    {
        if (mp[i] > 0)
        {
            cout << i << ' ' << mp[i] << '\n';
            mp[i] = 0;
        }
    }
}
int main()
{
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}