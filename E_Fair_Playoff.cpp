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
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    vector<int> temp = v;
    sort(all(temp));
    if ((temp[0] == v[0] || temp[0] == v[1]) && (temp[1] == v[0] || temp[1] == v[1]))
    {
        cout << "NO\n";
        return;
    }
    reverse(all(temp));
    if ((temp[0] == v[0] || temp[0] == v[1]) && (temp[1] == v[0] || temp[1] == v[1]))
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