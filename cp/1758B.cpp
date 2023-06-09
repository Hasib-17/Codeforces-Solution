/*Author: Hasib; Date:25/11/22*/
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
    ll n;
    cin >> n;
    vector<int> v;
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
            v.emplace_back(1);
    }
    else
    {
        // cout << (2 ^ 2 ^ 3 ^ 1) << '\n';
        for (int i = 0; i < n - 2; i++)
            v.emplace_back(2);
        v.emplace_back(3);
        v.emplace_back(1);
    }
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
