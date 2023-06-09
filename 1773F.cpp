/*Author: Hasib; Date:26/11/22*/
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
    //* @brief [START]*//
    ll n, a, b, cnt = 0;
    cin >> n >> a >> b;
    ll temp = n;
    vector<ll> v1, v2;
    while (n > 1)
    {
        if (a > 0)
        {
            v1.push_back(1);
            v2.push_back(0);
            a--;
        }
        else if (b > 0)
        {
            v1.push_back(0);
            v2.push_back(1);
            b--;
        }
        else
        {
            v1.push_back(0);
            v2.push_back(0);
            cnt++;
        }
        n--;
    }
    if (n == 1)
    {
        if (a > 0 && b == 0)
        {
            v1.push_back(a);
            v2.push_back(0);
        }
        else if (b > 0 && a == 0)
        {
            v1.push_back(0);
            v2.push_back(b);
        }
        else
        {
            v1.push_back(a);
            v2.push_back(b);
            cnt++;
        }
        n--;
    }
    cout << cnt << '\n';
    // for (auto i : v2)
    //     cout << i << ' ';
    for (ll i = 0; i < temp; i++)
    {
        cout << v1[i] << ":" << v2[i] << '\n';
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
