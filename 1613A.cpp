/*Author:-> Hasib; Date:26/01/23*/
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
void solve()
{
    //*[START]*//
    string a, b;
    ll x, y;
    cin >> a >> x;
    cin >> b >> y;
    if (a.size() + x != b.size() + y)
    {
        if (a.size() + x > b.size() + y)
            cout << ">\n";
        else
            cout << "<\n";
    }
    else
    {
        ll s = min(x, y);
        x -= s;
        y -= s;
        while (x--)
            a += '0';
        while (y--)
            b += '0';
        if (a > b)
            cout << ">\n";
        else if (a < b)
            cout << "<\n";
        else
            cout << "=\n";
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