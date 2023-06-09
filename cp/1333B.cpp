/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int f = 0;
    bool p = false, m = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i] and !p)
        {
            f = 1;
            break;
        }
        else if (a[i] > b[i] and !m)
        {
            f = 1;
            break;
        }
        p = p | (a[i] == 1);
        m = m | (a[i] == -1);
    }
    if (a[0] != b[0])
    {
        f = 1;
    }
    if (f)
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