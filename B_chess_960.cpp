/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e6 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    string s;
    cin >> s;
    int l = 0, r = 0, a = 0, k = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            if (l == 0)
                l = i + 1;
            else
                r = i + 1;
        }
        else if (s[i] == 'K')
            k = i + 1;
        else if (s[i] == 'R')
        {
            if (a == 0)
                a = i + 1;
            else
                b = i + 1;
        }
    }
    if ((l % 2) ^ (r % 2))
    {
        if (a < k && k < b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else
        cout << "No\n";
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}