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
    int n;
    cin >> n;
    ll sum1 = 0;
    ll sum2 = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        sum1 += x;
        sum2 += y;
    }
    if (sum1 % 2 == 0 && sum2 % 2 == 0)
        cout << 0 << '\n';
    else
    {
        // sort(all(v));
        int cnt = 0;
        for (auto i : v)
        {
            // cout << i.first << " " << i.second << '\n';
            sum1 -= i.first;
            sum2 -= i.second;
            // swap(i.first, i.second);
            sum1 += i.second;
            sum2 += i.first;
            cnt++;
            if (sum1 % 2 == 0 && sum2 % 2 == 0)
                break;
            else
            {
                sum1 -= i.second;
                sum1 += i.first;
                sum2 -= i.first;
                sum2 += i.second;
                cnt--;
            }
        }
        if (sum1 % 2 == 0 && sum2 % 2 == 0)
            cout << cnt << "\n";
        else
            cout << -1 << '\n';
    }
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