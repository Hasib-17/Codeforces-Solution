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
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "YES\n"
             << s1 << '\n';
        return;
    }
    if (s1[0] == s2[0] || s1[s1.size() - 1] == s2[s2.size() - 1])
    {
        cout << "YES\n";
        if (s1[0] == s2[0])
            cout << s1[0] << "*" << '\n';
        else
            cout << "*" << s1[s1.size() - 1] << '\n';
        return;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if ((s1[i] == s2[j]) && (i < s1.size() - 1 && j < s2.size() - 1))
            {
                if (s1[i + 1] == s2[j + 1])
                {
                    cout << "YES\n";
                    cout << "*" << s1[i] << s2[j + 1] << "*" << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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