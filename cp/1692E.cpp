/*Author: Hasib; Date:26/01/23*/
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
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll n, s, sum = 0, res = 0, k = 0, cnt = 0, temp = 0;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += (v[i] == 1);
        if (sum == s)
            k = i;
    }
    if (sum < s)
    {
        cout << -1 << '\n';
        return;
    }
    if (sum == s)
    {
        cout << 0 << '\n';
        return;
    }
    res = n - (k + 1);
    ll i = 0, j = k + 1;
    temp = s;
    // cout << k << '\n';
    while (j < n)
    {
        temp += v[j];
        if (temp > s)
        {
            while (temp > s)
            {
                temp -= v[i];
                i++;
            }
            if (temp == s)
            {
                res = min(res, n - (j + 1 - i));
                j++;
            }
        }
        else if (temp == s)
        {
            res = min(res, n - (j + 1 - i));
            j++;
        }
        else
            j++;
    }
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