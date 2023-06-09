/*Author:-> Hasib; Date:15/04/23*/
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
int main()
{
    ii_65;
    int t = 1;
    cin >> t;
    for (int h = 1; h <= t; h++)
    {
        vector<ll> v(26);
        map<char, ll> mp;
        char c = 'A';
        for (int i = 0; i < 26; i++)
        {
            cin >> v[i];
            mp[c] = v[i];
            c++;
        }
        ll n;
        cin >> n;
        map<string, ll> m;
        while (n--)
        {
            string s, t = "";
            cin >> s;
            for (int i = 0; i < s.size(); i++)
            {
                t += to_string(mp[s[i]]);
            }
            m[t]++;
            t.clear();
        }
        bool ok = false;
        for (auto i : m)
        {
            if (i.second > 1)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "Case #" << h << ": "
                 << "YES\n";
        }
        else
        {
            cout << "Case #" << h << ": "
                 << "NO\n";
        }
    }
    return 0;
}