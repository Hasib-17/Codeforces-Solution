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
    int n, a, b, ans = 0, cnt = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (b >= 0)
        ans = (a + b) * n;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cnt += (s[i] != s[i - 1]);
        }
        ans = (n * a) + (b * (cnt / 2 + 1));
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