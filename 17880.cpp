/*Author: Hasib; Date:08/02/23*/
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
    ll n, tw = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        tw += (v[i] == 2);
    }
    // cout << tw << '\n';
    if (tw % 2)
        cout << -1 << '\n';
    else if (tw == 0)
        cout << 1 << '\n';
    else
    {
        int i = 0, k = 0, h = tw / 2;
        while (tw != h)
        {
            k++;
            tw -= (v[i] == 2);
            i++;
        }
        cout << k << '\n';
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