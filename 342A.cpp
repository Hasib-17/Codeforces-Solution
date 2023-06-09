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
    int n, on = 0, tw = 0, th = 0, fr = 0, sx = 0;
    cin >> n;
    vector<int> v(n), v2;
    vector<vector<int>> temp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        on += (v[i] == 1);
        tw += (v[i] == 2);
        th += (v[i] == 3);
        fr += (v[i] == 4);
        sx += (v[i] == 6);
    }
    if (on + tw + th + fr + sx != n)
    {
        cout << -1 << '\n';
        return;
    }
    while (on > 0 && (tw > 0 && fr > 0))
    {
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(4);
        temp.push_back(v2);
        on--;
        tw--;
        fr--;
        v2.clear();
    }
    while (on > 0 && (tw > 0 && sx > 0))
    {
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(6);
        temp.push_back(v2);
        on--;
        tw--;
        sx--;
        v2.clear();
    }
    while (on > 0 && (th > 0 && sx > 0))
    {
        v2.push_back(1);
        v2.push_back(3);
        v2.push_back(6);
        temp.push_back(v2);
        on--;
        th--;
        sx--;
        v2.clear();
    }
    if (on + tw + th + fr + sx != 0)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 0; i < n / 3; i++)
    {
        for (auto u : temp[i])
            cout << u << " ";
        cout << '\n';
    }
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