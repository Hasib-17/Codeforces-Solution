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
vector<int> g(N);
void solve()
{
    //*@[START]*//
    int n;
    cin >> n;
    if (n % 2)
    {
        if (n == 3)
        {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        int mi = n / 2;  // 3
        int pl = mi - 1; // 2
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                cout << -mi << " ";
            else
                cout << pl << " ";
        }
    }
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n / 2; i++)
            cout << 2 << ' ' << -2 << ' ';
        cout << '\n';
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