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
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mx = n;
    if (mx == v[0])
        mx--;
    int indx = find(all(v), mx) - v.begin();
    for (int i = indx; i < n; i++)
        cout << v[i] << ' ';
    int l = indx - 1;
    // out(l);
    if (indx != n - 1)
    {
        // out(l);
        cout << v[l] << ' ';
        l--;
    }
    while (l >= 0 and v[l] > v[0])
    {
        cout << v[l] << ' ';
        l--;
    }
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
