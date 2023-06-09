/*Author: Hasib; Date:26/01/23*/
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
    //*@[START]*//
    int n, on = 0, tw = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        on += (v[i] == 100);
        tw += (v[i] == 200);
    }
    if (on == 0)
    {
        if (tw % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else if (tw == 0)
    {
        if (on % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else
    {
        if (on % 2)
            cout << "NO\n";
        else
            cout << "YES\n";
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