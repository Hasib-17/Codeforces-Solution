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
    int n, ans = 0;
    cin >> n;
    vector<int> v(n), od, ev;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2)
            od.push_back(v[i]);
        else
            ev.push_back(v[i]);
    }
    if (accumulate(all(v), 0LL) % 2 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    if (n % 2)
    {
        int cnto = INT_MAX;
        if (ev.size() > 0)
        {
            int cnte = 0, cnto = 0;
            for (int i = 0; i < ev.size() - 1; i++)
            {
                while (ev[i] % 2 == 0)
                {
                    ev[i] /= 2;
                    cnte++;
                }
            }
            for (int i = 0; i < od.size(); i++)
            {
                // int cnt = 0;
                while (od[i] % 2)
                {
                    od[i] /= 2;
                    cnto++;
                }
            }
            ans = min(cnte, cnto);
        }
        else
        {
            for (int i = 0; i < od.size(); i++)
            {
                int cnt = 0;
                while (od[i] % 2)
                {
                    od[i] /= 2;
                    cnt++;
                }
                cnto = min(cnto, cnt);
            }
            ans = cnto;
        }
    }
    else
    {
        int cnto = INT_MAX;
        if (od.size() % 2)
        {
            for (int i = 0; i < od.size(); i++)
            {
                int cnt = 0;
                while (od[i] % 2)
                {
                    od[i] /= 2;
                    cnt++;
                }
                cnto = min(cnto, cnt);
            }
            for (int i = 0; i < ev.size(); i++)
            {
                int cn = 0;
                while (ev[i] % 2 == 0)
                {
                    ev[i] /= 2;
                    cn++;
                }
                cnto = min(cnto, cn);
            }
            ans = cnto;
        }
        else
            ans = 0;
    }
    cout << ans << '\n';
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
