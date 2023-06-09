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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    int n;
    double sum = 0.0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v), dec);
    int mx = v[0];
    // cout << mx << '\n';
    for (int i = 1; i < n; i++)
        sum += v[i];
    double res = sum / (n - 1);
    res += mx;
    printf("%.9f\n", res);
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