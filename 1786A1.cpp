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
    ll n, l = 0, r = 0;
    cin >> n;
    ll alice = 1, bob = 0;
    bool al = false, bb = true;
    n--; // 16
    for (int i = 2; n; i++)
    {
        if (n <= i)
        {
            //
            if (bb)
                bob += n;
            else
                alice += n;
            n = 0;
            break;
        }
        if (bb)
        {

            bob += i;
            r++;
            n -= i; // 14
            if (r == 2)
            {
                al = true;
                bb = false;
                r = 0;
            }
        }
        else if (al)
        {
            // cout << i << ' ';
            alice += i;
            n -= i;
            l++;
            if (l == 2)
            {
                al = false;
                bb = true;
                l = 0;
            }
        }
    }
    cout << alice << " " << bob << '\n';
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