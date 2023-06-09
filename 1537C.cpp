/*Author: Hasib; Date:11/12/22*/
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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<int> v(n);
    int l = -1, r = -1;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    if (n == 2)
    {
        cout << v[0] << ' ' << v[1] << '\n';
        return;
    }
    int temp = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int x = v[i + 1] - v[i];
        if (x < temp)
        {
            temp = x;
            r = i + 1;
            l = i;
        }
    }
    for (int i = r; i < n; i++)
        cout << v[i] << ' ';
    for (int i = 0; i <= l; i++)
        cout << v[i] << ' ';
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
