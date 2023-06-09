/*Author: Hasib; Date:02/06/22*/
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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// const ll N = 1e9;
void solve()
{
    string s, t, a, b;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    if (n == m)
    {
        sort(all(s));
        sort(all(t));
        if (s == t)
            cout << "array\n";
        else
            cout << "need tree\n";
    }
    else if (m > n)
        cout << "need tree\n";
    else
    {
        for (int i = 0, j = 0; i < n; i++)
        {
            if (s[i] == t[j])
                j++;
            if (j == m)
            {
                cout << "automaton\n";
                return;
            }
        }
        sort(all(s));
        sort(all(t));
        for (int i = 0, j = 0; i < n; i++)
        {
            if (s[i] == t[j])
                j++;
            if (j == m)
            {
                cout << "both\n";
                return;
            }
        }
        cout << "need tree\n";
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
