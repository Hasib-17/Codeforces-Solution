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
    //*@[START]*//
    int n;
    cin >> n;
    // set<int> v;
    // ll r = 180;
    // for (int i = 3; i <= 10000; i++)
    // {
    //     int res = 180 * (i - 2);
    //     if (res % i == 0)
    //         v.insert(res / i);
    // }
    // for (auto i : v)
    //     cout << i << " ";
    // cout << '\n';
    while (n--)
    {
        int a;
        cin >> a;
        if (360 % (180 - a) == 0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    /*
    n=360/(180-angle);
    */
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