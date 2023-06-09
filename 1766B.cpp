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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> m;
    bool f = false;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string t = s.substr(i, 2);
        // t += s[i - 1];
        // t += s[i];
        m[t]++;
        if (m.find(t) != m.end())
            f = true;
    }
    if (m.size() <= (n / 2))
    {
        cout << "YES\n";
    }
    // for (auto i : m)
    // {
    //     // cout << i.first << " " << i.second << '\n';
    //     if (i.second > 1 && f)
    //     {
    //         cout << "YES\n";
    //         return;
    //     }
    // }
    else
        cout << "NO\n";

    // else
    //
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