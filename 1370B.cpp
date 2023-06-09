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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<int> v(2 * n);
    vector<pair<int, int>> od, ev;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> v[i];
        if (v[i] % 2)
            od.push_back({v[i], i + 1});
        else
            ev.push_back({v[i], i + 1});
    }
    int need = n - 1;
    int x = od.size();
    // out(x);
    for (int i = 0; x > 1 && i < od.size() - 1; i += 2)
    {
        if (need > 0)
        {
            cout << od[i].second << ' ' << od[i + 1].second << '\n';
            need--;
        }
        else
            break;
    }
    // out(need);
    int y = ev.size();
    if (need > 0)
    {
        for (int i = 0; y > 1 && i < ev.size() - 1; i += 2)
        {
            if (need > 0)
            {
                cout << ev[i].second << ' ' << ev[i + 1].second << '\n';
                need--;
            }
            else
                break;
        }
    }
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
