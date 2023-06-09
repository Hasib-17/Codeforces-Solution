/*Author: Hasib; Date:06/01/23*/
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
void solve()
{
    //*@[START]*//
    ll n;
    cin >> n;
    ll a = 1, b = n * n;
    ll arr[n][n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (j % 2)
                    arr[i][j] = a++;
                else
                    arr[i][j] = b--;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2)
                    arr[i][j] = b--;
                else
                    arr[i][j] = a++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
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