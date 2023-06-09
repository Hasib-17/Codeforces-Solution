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
}
int main()
{
    ii_65;
    int t = 1;
    vector<int> v(1e6 + 1, 1);
    for (int i = 2; i <= 1e6; i++)
    {
        for (int j = i + i; j <= 1e6; j += i)
            v[j] = i;
    }
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            ans = max(ans, v[i]);
        cout << ans << '\n';
    }
    return 0;
}