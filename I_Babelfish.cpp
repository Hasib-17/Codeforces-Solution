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
    string s1, s2, temp = "";
    map<string, string> mp;
    while (1)
    {
        cin >> s1;
        if (s1[s1.size() - 1] == 'y' and s1[s1.size() - 2] == 'a')
        {
            temp = s1;
            break;
        }
        else
        {
            cin >> s2;
            mp[s2] = s1;
        }
    }
    // for (auto i : mp)
    //     cout << i.first << ' ' << i.second << '\n';
    cout << mp[temp] << '\n';
    string a;
    while (cin >> a)
    {

        if (mp.count(a))
            cout << mp[a] << '\n';
        else
            cout << "eh\n";
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