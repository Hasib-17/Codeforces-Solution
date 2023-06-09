/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int n, a = 0, b = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 25)
        {
            ok = true;
            a++;
        }
        else if (ok && v[i] == 50)
        {
            if (a >= 1)
            {
                ok = true;
                b++;
                a--;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (ok && v[i] == 100)
        {
            if ((b >= 1 && a >= 1) || a >= 3)
            {
                if (a >= 1 && b >= 1)
                {
                    a--;
                    b--;
                }
                else
                    a -= 3;
                ok = true;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else
            break;
    }
    if (ok)
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