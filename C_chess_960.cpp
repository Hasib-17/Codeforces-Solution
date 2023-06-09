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

void solve()
{
    //*[START]*//
    string s;
    cin >> s;
    int n = s.size();
    int r = 0;
    bool ok = false;
    int b1 = 0, b2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (!b1)
                b1 = i + 1;
            else
                b2 = i + 1;
        }
        else if (s[i] == 'R')
            r++;
        else if (s[i] == 'K' and r == 1)
            ok = true;
    }
    if (ok)
    {
        if (b1 % 2 ^ b2 % 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else
        cout << "No\n";
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
