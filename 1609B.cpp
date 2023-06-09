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
bool sortbysec(const pair<string, int> &a, const pair<string, int> &b) { return (a.second < b.second); }
// int a[50];
void solve()
{
    //*[START]*//
    int n, q, cnt = 0;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        string t = s.substr(i, 3);
        if (t == "abc")
            cnt++;
    }
    while (q--)
    {
        int a, cc = 0;
        char c;
        cin >> a >> c;
        if (s[a - 1] == c)
        {
            cout << cnt << '\n';
            continue;
        }
        int loc = a - 1, pos = a;
        if (loc - 2 <= 0)
            loc = 0;
        else
            loc -= 2;
        for (int i = loc; i < pos; i++)
        {
            string t = s.substr(i, 3);
            if (t == "abc")
                cnt--;
        }
        s[a - 1] = c;
        for (int i = loc; i < pos; i++)
        {
            string t = s.substr(i, 3);
            if (t == "abc")
                cnt++;
        }
        cout << cnt << '\n';
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