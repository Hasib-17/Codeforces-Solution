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
    ll n;
    cin >> n;
    map<ll, ll> s1, s2, s3;
    vector<ll> v(n), v2(n - 1), v3(n - 2);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v2[i];
        s2[v2[i]]++;
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> v3[i];
        s3[v3[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (s2.count(v[i]) && s2[v[i]] > 0)
        {
            s2[v[i]]--;
        }
        else
        {
            cout << v[i] << '\n';
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s3.count(v2[i]) && s3[v2[i]] > 0)
        {
            s3[v2[i]]--;
        }
        else
        {
            cout << v2[i] << '\n';
            break;
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