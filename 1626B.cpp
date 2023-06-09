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
    int mx_indx = 0, before = 0;
    string s;
    cin >> s;
    int sz = s.size();
    for (int i = sz - 1; i > 0; i--)
    {
        int x = (s[i - 1] - '0') + (s[i] - '0');
        if (x >= 10)
        {
            mx_indx = i;
            before = x;
            break;
        }
        if (i == 1)
        {
            mx_indx = i;
            before = x;
        }
    }
    // cout << before << '\n';
    string t = to_string(before);
    if (before >= 10)
    {
        s[mx_indx - 1] = t[0];
        s[mx_indx] = t[1];
        cout << s << '\n';
    }
    else
    {
        cout << t;
        for (int i = 2; i < s.size(); i++)
            cout << s[i];
        cout << '\n';
    }
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