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
    //*@[START]*//
    int n, cnt = 0, on = 0, tw = 0, th = 0;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    vector<int> v(n), one, two, thre;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            on++;
            one.push_back(v[i]);
        }
        else if (v[i] == 2)
        {
            tw++;
            two.push_back(v[i]);
        }
        else if (v[i] == 3)
        {
            th++;
            thre.push_back(v[i]);
        }
        else
            cnt++;
    }
    for (int i = 0; i < thre.size(); i++)
    {
        if (on > 0)
        {
            on--;
            cnt++;
        }
        else
            cnt++;
    }
    for (int i = 0; i < two.size(); i++)
    {
        if (on >= 1)
        {
            cnt++;
            if (on > 1)
                on -= 2;
            else
                on = 0;
        }
        else
        {
            cnt++;
            i++;
        }
    }
    // cout << cnt << "\n";
    if (on > 0)
    {
        if (on <= 4)
            cnt++;
        else
        {
            cnt += (on / 4);
            if (on % 4 != 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
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