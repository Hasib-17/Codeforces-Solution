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
    string s;
    cin >> s;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '>')
        {
            v1.push_back(1);
            v2.push_back(0);
        }
        if (s[i] == '<')
        {
            v1.push_back(0);
            v2.push_back(1);
        }
    }
    int mxsum = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == 1)
            cur++;
        else
        {
            mxsum = max(mxsum, cur);
            cur = 0;
        }
    }
    mxsum = max(mxsum, cur);
    cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (v2[i] == 1)
            cur++;
        else
        {
            mxsum = max(mxsum, cur);
            cur = 0;
        }
    }
    mxsum = max(mxsum, cur);
    cout << mxsum + 1 << '\n';
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
