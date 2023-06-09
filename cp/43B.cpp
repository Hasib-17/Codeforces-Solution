/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    string s, t;
    getline(cin, s);
    getline(cin, t);
    bool ok = true;
    // cout << s << '\n';
    map<char, int> mps, mpt;
    for (auto i : s)
    {
        mps[i]++;
    }
    for (auto i : t)
    {
        mpt[i]++;
    }
    for (auto i : mpt)
    {
        if (i.first == ' ')
            continue;
        if (mps.count(i.first))
        {
            if (mps[i.first] < mpt[i.first])
            {
                // cout << i.first << " " << i.second << '\n';
                ok = false;
                break;
            }
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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