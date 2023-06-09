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
    ll n, x = 2;
    vector<ll> v(N, 0), temp;
    for (int i = 4; i <= N; i += 2)
        v[i] = 1;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (v[i] == 1)
            continue;
        for (int j = i * i; j <= N; j += i + i)
            v[j] = 1;
    }
    v[1] = 1;
    for (int i = 1; i <= N; i++)
    {
        if (v[i] == 0)
            temp.push_back(i);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << '\n';
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