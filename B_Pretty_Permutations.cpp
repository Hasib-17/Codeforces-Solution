/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n - 1; i += 2)
    {
        v.push_back(i + 1);
        v.push_back(i);
    }
    if (n % 2)
    {
        v.push_back(n);
        swap(v[v.size() - 1], v[v.size() - 2]);
    }
    for (auto i : v)
        cout << i << ' ';
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