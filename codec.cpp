/*Author: Hasib; Date:09/01/23*/
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
// int a[50];
const ll N = 32000;
void solve()
{
    //*@[START]*//
    ll x, y;
    cin >> x >> y;
    if (x - y >= 2)
        cout << "CHEF\n";
    else if (y - x >= 2)
        cout << "CHEFINA\n";
    else
    {
        ll mn = min(x, y);
        if (mn % 2)
            cout << "CHEF\n";
        else
            cout << "CHEFINA\n";
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