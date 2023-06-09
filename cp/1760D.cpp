/*Author: Hasib; Date:25/11/22*/
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
    //* @brief [START]*//
    int n, cnt = 1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool f = true;
    for (int i = 0; i < n - 1 && f; i++)
    {
        f = false;
        while (v[i + 1] >= v[i] && i < n - 1)
            i++;
        if (i == n - 1)
        {
            cout << "YES\n";
            break;
        }
        else
        {
            cout << "NO\n";
        }
    }
    if (f)
        cout << "YES\n";
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
