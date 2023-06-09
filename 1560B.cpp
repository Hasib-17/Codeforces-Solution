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
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    int up = a, dn = b;
    while (!mp.count(c))
    {
        while (up > 1 && dn > 1)
        {
            up--;
            dn--;
            if (mp.count(up) || mp.count(dn))
            {
                // cout << "H\n";
                cout << -1 << '\n';
                return;
            }
            else
            {
                mp[up]++;
                mp[dn]++;
            }
            if (up == c || dn == c)
            {
                if (up == c)
                    cout << dn << '\n';
                else if (dn == c)
                    cout << up << '\n';
                return;
            }
            // out(up);
            // out(dn);
        }
        while (a != c || b != c)
        {
            a++;
            b++;
            if (mp.count(a) || mp.count(b))
            {
                cout << -1 << '\n';
                return;
            }
            else
            {
                mp[a]++;
                mp[b]++;
            }
            if (a == c || b == c)
            {
                if (a == c)
                    cout << b << '\n';
                else if (b == c)
                    cout << a << '\n';
                return;
            }
            // out(a);
            // out(b);
        }
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
