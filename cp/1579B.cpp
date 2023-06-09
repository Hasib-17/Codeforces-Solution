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
// int a[50];
void solve()
{
    //*[START]*//
    int n, k = 0;
    cin >> n;
    vector<int> v(n);
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // if (is_sorted(v.begin(), v.end()))
    // {
    //     cout << "Sorted" << '\n';
    //     return;
    // }
    // cout << mx << '\n';
    v.resize(n + 1);
    while (1)
    {
        vector<int> temp;
        int mx = max_element(v.begin(), v.begin() + n - k) - v.begin();
        int res = v[mx];
        for (int i = mx; i < n - k; i++)
        {
            v[i] = v[i + 1];
        }
        v[n - k - 1] = res;
        int h = n - k;
        k++;
        if (mx + 1 == h)
        {
            if (is_sorted(v.begin(), v.end() - 1))
                break;
            else
                continue;
        }
        temp.push_back(mx + 1);
        temp.push_back(h);
        temp.push_back(1);
        ans.push_back(temp);
        // temp.clear();
        if (is_sorted(v.begin(), v.end() - 1))
            break;
    }
    int t = ans.size();
    cout << t << '\n';
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << ans[i][j] << " ";
        cout << '\n';
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