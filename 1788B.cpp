/*Author: Hasib; Date:08/02/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    //*@[START]*//
    string s, a, b;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int x;
        int h = s[i] - '0';
        if (sum > 0)
            x = h / 2;
        else
            x = (h + 1) / 2;
        a += '0' + x; // 545
        int y = h - x;
        b += '0' + y;   // 454
        sum += (x - y); // 0
        // cout << sum << '\n';
    }
    cout << stoi(a) << " " << stoi(b) << '\n';
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