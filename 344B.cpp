/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e5 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    int sum = 0;
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2)
        cout << "Impossible\n";
    else
    {
        int x = (v[0] + v[1] + v[2]) / 2; // semi-perimeter
        if (x - v[0] < 0 || x - v[1] < 0 || x - v[2] < 0)
            cout << "Impossible\n";
        else
            cout << x - v[2] << " " << x - v[0] << " " << x - v[1] << '\n';
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