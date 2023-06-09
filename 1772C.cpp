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
void solve()
{
    //*@[START]*//
    ll n, k, l = 0;
    cin >> n >> k;
    int temp = n;
    if (n == k)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << '\n';
    }
    // else if (k - n == 1)
    // {
    //     for (int i = 1; i <= n - 1; i++)
    //         cout << i << " ";
    //     cout << k << '\n';
    // }
    else
    {
        int p = 1, q = 1;
        vector<int> v, res;
        for (int i = 0; i < n; i++)
        {
            v.push_back(p); // 1 2 4
            p += q;         // 4
            q++;            // 3
        }
        int sz = v.size(), j = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (k - v[i] + i + 1 >= n)
            {
                j = i; // 4
                break;
            }
        }
        for (int t = 0; t <= j; t++)
            res.push_back(v[t]);
        int rr = v[j] + 1;
        while (res.size() < n)
        {
            res.push_back(rr);
            rr++;
        }
        for (auto i : res)
            cout << i << " ";
        cout << '\n';
    }

    // v.push_back(k);

    //
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