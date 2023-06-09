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
float avge(float a[], int h)
{
    float sum, avg;
    for (int i = 0; i < h; i++)
        sum += a[i];
    return avg = sum / h;
}
void solve()
{
    //*@[START]*//
    int h;
    cin >> h;
    float a[100];
    for (int i = 0; i < h; i++)
        cin >> a[i];
    float res = avge(a, h);
    cout << res << '\n';
}
int main()
{
    ii_65;
    ll t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
