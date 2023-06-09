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
    int n, x = 0;
    cin >> n;
    vector<int> a(n), b(n);
    string s;
    cin >> s;
    map<char, int> m1, m2;
    for (int i = 0; i < n; i++)
    {
        m1[s[i]]++;
        a[i] = m1.size();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        m2[s[i]]++;
        b[i] = m2.size();
    }
    // for (int i = 0; i < a.size(); i++)
    //     cout << b[i] << " ";
    // cout << '\n';
    for (int i = 0; i < n - 1; i++)
    {
        x = max(x, a[i] + b[i + 1]);
    }
    cout << x << '\n';
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