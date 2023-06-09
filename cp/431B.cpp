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
    vector<int> v = {1, 2, 3, 4, 5};
    ll arr[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            cin >> arr[i][j];
    }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //         cout << arr[i][j] << " ";
    //     cout << '\n';
    // }
    ll cur = 0, res = 0;
    do
    {
        cur = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i; j < 4; j += 2)
            {
                int x = v[j];
                int y = v[j + 1];
                cur += arr[x][y] + arr[y][x];
            }
        }
        res = max(res, cur);
    } while (next_permutation(all(v)));
    cout << res << '\n';
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}