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
    //*@[START]*//
    int n, k;
    cin >> n >> k;
    if (k == 10)
    {
        if (n == 1)
        {
            cout << -1 << '\n';
            return;
        }
        else if (n >= 10)
        {
            cout << 10;
            for (int i = 1; i < n - 1; i++)
            {
                cout << 0;
            }
            cout << '\n';
        }
        else
        {
            cout << 10;
            for (int i = 1; i < n - 1; i++)
            {
                cout << 0;
            }
            cout << '\n';
        }
    }
    else
    {
        cout << k;
        for (int i = 1; i < n; i++)
        {
            cout << 0;
        }
        cout << '\n';
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