/*Author: Hasib; Date:18/11/22*/
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
    //* @brief [START]*//
    map<int, int> mp1, mp2;
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        mp1[x]++;
        mp2[y]++;
    }
    bool ok = true, flag = true;
    for (auto i : mp1)
    {
        if (i.second > 1)
        {
            ok = false;
            break;
        }
    }
    for (auto i : mp2)
    {
        if (i.second > 1)
        {
            flag = false;
            break;
        }
    }
    if (!ok & !flag)
        cout << "NO\n";
    else
        cout << "YES\n";
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
