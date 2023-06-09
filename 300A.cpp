/*Author: Hasib; Date:26/01/23*/
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
void solve()
{
    //*[START]*//
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> pos, neg, zero;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
            neg.push_back(v[i]);
        else if (v[i] > 0)
            pos.push_back(v[i]);
        else
            zero.push_back(v[i]);
    }
    if (neg.size() % 2 == 0)
    {
        if (pos.size() > 0)
        {
            int x = neg.back();
            zero.push_back(x);
            neg.pop_back();
        }
        else
        {
            int x = neg.back();
            neg.pop_back();
            zero.push_back(x);
            int w = neg.back();
            neg.pop_back();
            pos.push_back(w);
            int z = neg.back();
            neg.pop_back();
            pos.push_back(z);
        }
    }
    else
    {
        if (pos.size() == 0)
        {
            int x = neg.back();
            neg.pop_back();
            pos.push_back(x);
            int y = neg.back();
            neg.pop_back();
            pos.push_back(y);
        }
    }
    cout << neg.size() << " ";
    for (auto i : neg)
        cout << i << " ";
    cout << '\n';
    cout << pos.size() << " ";
    for (auto i : pos)
        cout << i << " ";
    cout << '\n';
    cout << zero.size() << " ";
    for (auto i : zero)
        cout << i << " ";
    cout << '\n';
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