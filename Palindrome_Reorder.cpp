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
    int cnt = 0;
    string s, t;
    cin >> s;
    t = s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
    for (auto i : m)
    {
        cnt += (i.second % 2);
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    int k = 0, j = s.size() - 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]] > 1)
        {
            t[k] = s[i];
            t[j] = s[i];
            m[s[i]] -= 2;
            j--;
            k++;
        }
        else if (m[s[i]] == 1 && k == j)
            t[k] = s[i];
    }
    cout << t << '\n';
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