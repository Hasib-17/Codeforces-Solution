/*Author: Hasib; Date:03/01/23*/
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
    int a = 0, b = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        string t = s.substr(i, 2);
        if (t == "ab")
            a++;
        else if (t == "ba")
            b++;
        else
            continue;
    }
    if (a == b)
        cout << s << '\n';
    else
    {
        int i = 0, j = 0;
        while (a > b)
        {
            if (s[i] == 'a')
                s[i] = 'b';
            i++;
            a--;
        }
        while (b > a)
        {
            if (s[j] == 'b')
                s[j] = 'a';
            j++;
            b--;
        }
        cout << s << "\n";
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