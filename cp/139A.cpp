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
    int n, sum = 0, k = 0;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
        cin >> v[i];
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (sum + v[j] >= n)
            {
                sum += v[j];
                k = j + 1;
                cout << k << '\n';
                return;
            }
            else
                sum += v[j];
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