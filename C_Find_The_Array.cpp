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
    int n, sum = 1, j = 2, cnt = 1;
    cin >> n;
    vector<int> v;
    while (sum < n)
    {
        sum += j;
        if (sum > n)
        {
            sum -= j;
            break;
        }
        if (sum > 0)
            v.push_back(j);
        cnt++;
        j += 2;
    }
    int x = n - sum;
    if (n == 1)
        cout << 1 << '\n';
    else if (x - v[v.size() - 1] == 2 ||)
        cout << cnt + 1 << '\n';
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