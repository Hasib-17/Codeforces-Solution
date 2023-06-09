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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int mx1 = 0, mx2 = 0;
    mx1 = *max_element(all(a));
    mx2 = *max_element(all(b));
    // cout << mx1 << " " << mx2 << '\n';
    if (mx2 == b[n - 1] and mx1 == a[n - 1])
    {
        cout << "Yes\n";
        return;
    }
    int l = a[n - 1];
    int r = b[n - 1];
    // swap(a[n - 1], b[n - 1]);
    b[n - 1] = l;
    a[n - 1] = r;
    if (mx2 == b[n - 1] and mx1 == a[n - 1])
    {
        cout << "Yes\n";
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > a[n - 1] && (b[i] > a[n - 1] || a[i] > b[n - 1]))
        {
            cout << "No\n";
            return;
        }
    }
    // cout << "Ok\n";
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] > b[n - 1] && (b[i] > a[n - 1] || a[i] > b[n - 1]))
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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