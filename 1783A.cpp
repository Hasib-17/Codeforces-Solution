/*Author:-> Hasib; Date:26/01/23*/
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
    //*[START]*//
    ll n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sum += v[0];
    for (int j = 1; j < n; j++)
    {
        if (sum == v[j])
        {
            if (j == n - 1)
            {
                cout << "NO\n";
                return;
            }
            for (int k = j + 1; k < n; k++)
            {
                if (sum != v[k])
                {
                    sum += v[k];
                    swap(v[j], v[k]);
                    break;
                }
                if (k == n - 1)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
        else
            sum += v[j];
    }
    cout << "YES\n";
    for (auto i : v)
        cout << i << ' ';
    cout << '\n';
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