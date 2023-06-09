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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// const ll N = 1e9;
void solve()
{
    string s;
    cin >> s;
    if (s.size() <= 2)
    {
        cout << "NO\n";
        return;
    }
    vector<int> a, b;
    map<string, int> mp;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string t = s.substr(i, 2);
        if (t == "AB")
        {
            a.push_back(i);
            mp[t]++;
        }
        if (t == "BA")
        {
            b.push_back(i);
            mp[t]++;
        }
    }
    if (mp.empty())
        cout << "NO\n";
    else
    {
        if (a.size() == 0 ^ b.size() == 0)
            cout << "NO\n";
        else if (b[b.size() - 1] - a[0] > 1)
            cout << "YES\n";
        else if (a[a.size() - 1] - b[0] > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
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
