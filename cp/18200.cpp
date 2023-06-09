/*Author:-> Hasib; Date:26/01/23*/
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
vector<int> g(N);
void solve()
{
    //*[START]*//
    string s;
    cin >> s;
    int cnt = 0;
    if (s[0] == '_' || s.size() == 1)
        cnt++;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '_' && s[i - 1] == '_')
            cnt++;
    }
    if (s[s.size() - 1] == '_')
        cnt++;
    cout << cnt << '\n';
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