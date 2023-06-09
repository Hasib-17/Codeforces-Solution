/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, sum1 = 0, sum2 = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;
    for (int i = 0; i < s.size(); i++)
    {
        if (i < (s.size() / 2))
            a.push_back(s[i] - '0');
        else
            b.push_back(s[i] - '0');
    }
    sort(all(a));
    sort(all(b));
    int l = 0, r = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < b[i])
            l++;
        else if (a[i] > b[i])
            r++;
    }
    if ((r == 0 && l == a.size()) || (r == a.size() && l == 0))
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