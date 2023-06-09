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
    ll n, cnt = 0, k = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
            cnt++;
        else
            cnt--;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && cnt != 0)
        {
            if (a[i + 1] != b[i + 1])
            {
                k = 1;
                break;
            }
        }
        if (a[i] != b[i] && cnt != 0)
        {
            if (a[i + 1] == b[i + 1])
            {
                k = 1;
                break;
            }
        }
    }
    if (k)
        cout << "NO\n";
    else
        cout << "YES\n";
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