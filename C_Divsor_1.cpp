/*Author: Hasib; Date:09/01/23*/
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
// int a[50];
void solve()
{
    //*@[START]*//
    vector<int> v(1000001, 0);
    for (int i = 1; i <= 1000001; i++)
    {
        for (int j = i; j <= 1000001; j += i)
        {
            v[j]++;
        }
    }
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        cout << v[x] << '\n';
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