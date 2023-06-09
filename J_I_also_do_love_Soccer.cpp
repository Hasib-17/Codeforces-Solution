///*Author:-> Hasib; Date:26/01/23*/
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
// vector<int> g(N);
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    map<string, int> map1;
    for (int i = 1; i <= n; i++)
    {
        string s, t;
        cin >> s >> t;
        v.emplace_back(s, t);

        if (s == t)
        {
            map1[s]++;
        }
        else
        {
            map1[s]++;
            map1[t]++;
        }
    }
    bool go = true;
    for (auto &pair : v)
    {
        if (map1[pair.first] >= 2 && map1[pair.second] >= 2)
        {
            go = false;
            break;
        }
    }

    if (go)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
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
// wearepstu