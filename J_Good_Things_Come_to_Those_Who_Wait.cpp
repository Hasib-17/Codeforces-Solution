/*Author: Hasib; Date:18/11/22*/
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
}
int main()
{
    ii_65;
    int t = 1;
    cin >> t;
    // while (t--)
    //     solve();
    for (int k = 0; k < t; k++)
    {
        ll n, p = 1;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // p *= v[i];
        }
        sort(all(v));
        if (n == 1)
            p = v[0] * v[0];
        else
            p = v[0] * v[n - 1];
        cout << "Case " << k + 1 << ": " << p << '\n';
    }
    return 0;
}
