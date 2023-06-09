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
    ll n, sum = 0, cnt = 1;
    cin >> n;
    vector<int> v(n), res;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0)
            sum += abs(v[i] - v[i - 1]);
    }
    bool dwn = 0, up = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1] and !dwn)
        {
            cnt++;
            dwn = 1;
            up = 0;
        }
        else if (v[i] > v[i - 1] and !up)
        {
            cnt++;
            up = 1;
            dwn = 0;
        }
    }
    cout << cnt << '\n';
}
int main()
{
    ii_65;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}