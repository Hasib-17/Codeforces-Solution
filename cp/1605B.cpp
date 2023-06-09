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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = s.size() - 1;
    vector<int> v;
    while (l < r)
    {
        if (s[l] == '1' and s[r] == '0')
        {
            v.push_back(l + 1);
            v.push_back(r + 1);
            l++;
            r--;
        }
        else if (s[l] == '1' and s[r] == '1')
            r--;
        else if (s[l] == '0' and s[r] == '0')
            l++;
        else
        {
            l++;
            r--;
        }
    }
    sort(all(v));
    if (v.size() > 0)
        cout << 1 << '\n';
    cout << v.size() << ' ';
    for (auto i : v)
        cout << i << ' ';
    cout << '\n';
}
int main()
{
    ii_65;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
