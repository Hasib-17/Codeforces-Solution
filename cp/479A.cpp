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
    int a, b, c, sum = 0, ct = 0;
    cin >> a >> b >> c;
    sum = a + b * c;
    ct = max(sum, ct);
    sum = 0;
    sum = a * (b + c);
    ct = max(sum, ct);
    sum = 0;
    sum = a * b * c;
    ct = max(sum, ct);
    sum = 0;
    sum = (a + b) * c;
    ct = max(sum, ct);
    sum = 0;
    sum = a + b + c;
    ct = max(sum, ct);
    cout << ct << '\n';
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