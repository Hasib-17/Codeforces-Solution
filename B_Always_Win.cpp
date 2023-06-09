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
#define out(x) cout << #x << " -> " << x << "\n"
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    int t = 0, a = 0;
    string s;
    cin >> s;
    for (auto i : s)
    {
        if (i == 'T')
            t++;
        else
            a++;
    }
    if (t > a)
        cout << "T\n";
    else if (t == a)
    {
        int trget = n / 2, targeta = n / 2;
        for (auto i : s)
        {
            if (i == 'T')
                trget--;
            else
                targeta--;
            if (trget == 0)
            {
                cout << "T\n";
                return;
            }
            if (targeta == 0)
            {
                cout << "A\n";
                return;
            }
        }
    }
    else
        cout << "A\n";
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
