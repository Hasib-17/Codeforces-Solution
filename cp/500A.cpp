/*Author: Hasib; Date:09/01/23*/
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
bool sortbysec(const pair<string, int> &a, const pair<string, int> &b) { return (a.second < b.second); }
// int a[50];
void solve()
{
    //*[START]*//
    int n, m, c = 1;
    cin >> n >> m;
    vector<int> v(n - 1), v2;
    for (int i = 0; i < n - 1; i++)
        cin >> v[i];
    v2.push_back(1);
    for (int i = 0; i < n - 1;)
    {
        v2.push_back(i + 1 + v[i]);
        int x = i + 1 + v[i];
        i = x - 1;
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if (v2[i] == m)
        {
            c = 0;
            break;
        }
    }
    if (c)
        cout << "NO\n";
    else
        cout << "YES\n";
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