/*Author: Hasib; Date:26/11/22*/
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1 && s[0] == '?')
        s[0] = 'B';
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '?' && s[i - 1] != '?')
        {
            if (s[i - 1] == 'B')
                s[i] = 'R';
            else
                s[i] = 'B';
        }
    }
    if (s[n - 1] == '?')
        s[n - 1] = 'R';
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '?' && s[i + 1] != '?')
        {
            if (s[i + 1] == 'R')
                s[i] = 'B';
            else
                s[i] = 'R';
        }
    }
    cout << s << '\n';
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