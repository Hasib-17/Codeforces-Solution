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
    int n, cnt = INT_MAX, c = 0;
    cin >> n;
    vector<int> v(n), od;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2)
            od.push_back(v[i]);
    }
    int x = accumulate(all(v), 0LL);
    if (x % 2 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    while (x % 2)
    {
        x /= 2;
        c++;
    }
    cnt = min(c, cnt);
    c = 0;
    for (int i = 0; i < od.size();)
    {
        od[i] /= 2;
        if (od[i] % 2 == 0)
            i++;
        c++;
    }
    cnt = min(c, cnt);
    cout << cnt << '\n';
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
