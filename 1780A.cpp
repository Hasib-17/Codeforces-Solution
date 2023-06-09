/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e9 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n, od = 0, ev = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2)
            od++;
        else
            ev++;
    }
    if ((ev >= 2 && od > 0) or od >= 3)
    {
        cout << "YES\n";
        if (od >= 3)
        {
            od = 3;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 && od > 0)
                {
                    cout << i + 1 << ' ';
                    od--;
                }
                if (od == 0)
                {
                    cout << '\n';
                    return;
                }
            }
        }
        else
        {
            ev = 2, od = 1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 && od > 0)
                {
                    cout << i + 1 << ' ';
                    od--;
                }
                else if (v[i] % 2 == 0 && ev > 0)
                {
                    cout << i + 1 << ' ';
                    ev--;
                }
                if (od == 0 && ev == 0)
                {
                    cout << '\n';
                    return;
                }
            }
        }
    }
    else
        cout << "NO\n";
}
int main()
{
    // freopen("cowqueue.in", "r", stdin);
    // freopen("cowqueue.out", "w", stdout);
    ii_65;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}