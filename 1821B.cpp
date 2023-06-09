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
// const ll N = 1e9;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int mn = INT_MAX, mx = INT_MIN, pos1 = -1, pos2 = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            // out(i);
            if (pos1 == -1)
                pos1 = i;
            pos2 = i;
            c = 1;
        }
        else
            c = 0;
        if (c)
        {
            if (a[i] < mn)
                mn = a[i];
            if (a[i] > mx)
                mx = a[i];
        }
    }
    // out(pos1);
    // out(mn);
    int l = pos1, r = pos2;
    for (int i = pos1 - 1; i >= 0; i--)
    {
        if (a[i] <= mn)
        {
            l--;
            mn = a[i];
        }
        else
            break;
    }
    for (int i = pos2 + 1; i < n; i++)
    {
        if (a[i] >= mx)
        {
            r++;
            mx = a[i];
        }
        else
            break;
    }
    cout << l + 1 << ' ' << r + 1 << '\n';
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
