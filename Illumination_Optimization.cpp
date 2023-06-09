/*Author:-> Hasib; Date:15/04/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
vector<int> g(N);
int main()
{
    ii_65;
    int t = 1;
    cin >> t;
    for (int h = 1; h <= t; h++)
    {
        ll m, r, n;
        cin >> m >> r >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        int a = 0;
        bool ok = false;
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0 and v[i] - a > r)
            {
                ok = true;
                break;
            }
            else if (v[i + 1] - v[i] > 2 * r)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "Case #" << h << ": IMPOSSIBLE\n";
            continue;
        }
        v.push_back(m);
        int cnt = 0;
        int k = 0;
        if (v[0] - r <= k)
        {
            cnt++;
        }
        for (int i = 0; i < m; i++)
        {
            if (v[i] + r + r <= v[i + 1])
                cnt++;
        }

        cout << "Case #" << h << ": " << cnt << '\n';
    }
    return 0;
}