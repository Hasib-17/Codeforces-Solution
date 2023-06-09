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
vector<int> g(N);
void solve()
{
    //*@[START]*//
}
int main()
{
    ii_65;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> v(3, 0), v2;
        int k;
        for (ll j = 0; j < 3; j++)
        {
            cin >> v[j];
        }
        cin >> k;
        sort(all(v));
        ll x = v[2] - k;
        ll y = max(v[0], v[1]);
        ll z = y - k;
        v2.push_back(x);
        v2.push_back(min(v[0], v[1]));
        v2.push_back(z);
        sort(all(v2));
        ll p = v2[0] + k;
        ll q = v2[1] + k;
        if (p == q && q == v2[2])
        {
            cout << "Case " << i << ":"
                 << " Peaceful" << endl;
        }
        else
        {
            cout << "Case " << i << ":"
                 << " Fight" << endl;
        }
    }
    return 0;
}