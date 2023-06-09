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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    int a, b, c;
    cin >> a >> b >> c;
    string x1, y1;
    x1.push_back('1');
    for (int i = 0; i < a - 1; i++)
        x1.push_back('0');
    // out(x1);
    y1.push_back('1');
    for (int i = 0; i < b - 1; i++)
        y1.push_back('0');
    // out(y1);
    y1[b - c] = '1';
    // out(y1);
    cout << x1 << ' ' << y1 << '\n';
    // cout << __gcd(10, 101) << '\n';
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