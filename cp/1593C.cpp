/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const int N = 1e5 + 10;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
int n;
int k;

map<int, int> mp;
bool isSave(vector<int> &v, int mid)
{
}
void solve()
{
    //*@[START]*//
    int cnt = 0;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(all(v));
    int lo = 0, hi = N, mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (isSave(v, mid))
            lo = mid;
        else
            hi = mid - 1;
    }
    if (isSave(v, hi))
    {
        cout << hi << '\n';
    }
    else
    {
        cout << lo << '\n';
    }
}
int main()
{
    ii_65;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
