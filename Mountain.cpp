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
    int n, m, q;
    cin >> n >> m >> q;
    int arr[n][m];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            arr[i][j] = i;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //         cout << arr[i][j] << ' ';
    //     cout << '\n';
    // }
    while (q--)
    {
        int x, res = 0, p = 1, k = 0;
        cin >> x;
        if (x <= n)
        {
            cout << x << " " << 1 << '\n';
            cout << 1 << '\n';
        }
        else if (x <= sum)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    k += (j > k);
                    res += arr[j][i];
                    if (res == x)
                    {
                        break;
                    }
                }
            }
        }
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