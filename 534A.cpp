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
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << 1 << '\n'
             << 1 << '\n';
        return;
    }
    if (n == 3)
    {
        cout << 2 << '\n'
             << 1 << " " << 3 << '\n';
        return;
    }
    if (n == 4)
    {
        cout << 4 << '\n';
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << '\n';
        return;
    }
    cout << n << '\n';
    for (int i = 1; i <= n; i += 2)
        cout << i << " ";
    for (int i = 2; i <= n; i += 2)
        cout << i << " ";
    cout << '\n';
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