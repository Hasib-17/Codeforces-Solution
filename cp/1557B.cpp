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
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// int a[50];
void solve()
{
    //*@[START]*//
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }
    sort(all(v));
    int needk = 0, cnt = 1;
    // cout << mp[1] << " " << mp[2] << '\n';
    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second << '\n';
    // }
    for (int i = 0; i < n - 1; i++)
    {
        if (mp[v[i]] + 1 == mp[v[i + 1]])
            continue;
        else
            cnt++;
    }
    if (cnt <= k)
        cout << "Yes\n";
    else
        cout << "No" << '\n';
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