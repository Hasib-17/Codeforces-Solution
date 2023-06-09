/*Author: Hasib; Date:18/11/22*/
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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n), res;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    sort(all(v));
    int mx = v[n - 1];
    ll i = 1, sum = 0, f = 0;
    while (i)
    {
        if (st.find(i) != st.end())
            i++;
        else
        {
            sum += i;
            if (sum > s)
            {
                cout << "NO\n";
                return;
            }
            st.insert(i);
            if (sum == s)
            {
                for (int j = 1; j <= mx; j++)
                {
                    if (st.find(j) != st.end())
                        continue;
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                if (!f)
                    cout << "YES\n";
                else
                    cout << "NO\n";
                break;
            }
            i++;
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