/*Author: Hasib; Date:27/12/22*/
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
    string s;
    cin >> s;
    ll cnt = 0, j = 0;
    for (ll i = s.size() - 1; i > 0; i--)
    {
        if (s[i] == '5' || s[i] == '0')
        {
            j = i;
            break;
        }
        else
            cnt++;
    }
    ll c = cnt;
    for (ll i = j; i > 0; i--)
    {
        if (s[j] == '0')
        {
            if (s[i - 1] == '0' || s[i - 1] == '5')
                break;
            else
                cnt++;
        }
        else if (s[j] == '5')
        {
            if (s[i - 1] == '2' || s[i - 1] == '7')
                break;
            else
                cnt++;
        }
    }
    // cout << cnt << '\n';
    for (ll i = j; i > 0; i--)
    {
        if (s[j] == '0')
        {
            if (s[i - 1] == '0' || s[i - 1] == '5')
                break;
            else
                c++;
        }
        else if (s[j] == '5')
        {
            if (s[i - 1] == '2' || s[i - 1] == '7')
                break;
            else if (s[i - 1] == '0')
            {
                j = i - 1;
                c++;
            }
            else
                c++;
        }
        // cout << cnt << '\n';
    }
    ll res = min(c, cnt);
    cout << res << '\n';
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