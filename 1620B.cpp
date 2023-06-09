/*Author: Hasib; Date:18/02/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    ll w, h, k1, k2, k3, k4, sum = 0, cnt = 0;
    cin >> w >> h;
    vector<int> v1, v2, v3, v4;
    cin >> k1;
    v1.resize(k1);
    for (int i = 0; i < k1; i++)
        cin >> v1[i];
    sum = (v1[k1 - 1] - v1[0]) * h;
    cnt = max(sum, cnt);
    sum = 0;
    cin >> k2;
    v2.resize(k2);
    for (int i = 0; i < k2; i++)
        cin >> v2[i];
    sum = (v2[k2 - 1] - v2[0]) * h;
    cnt = max(sum, cnt);
    sum = 0;
    cin >> k3;
    v3.resize(k3);
    for (int i = 0; i < k3; i++)
        cin >> v3[i];
    sum = (v3[k3 - 1] - v3[0]) * w;
    cnt = max(sum, cnt);
    sum = 0;
    cin >> k4;
    v4.resize(k4);
    for (int i = 0; i < k4; i++)
        cin >> v4[i];
    sum = (v4[k4 - 1] - v4[0]) * w;
    cnt = max(sum, cnt);
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