///*Author:-> Hasib; Date:26/01/23*/
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
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
void solve()
{
    //*[START]*//
    string s;
    cin >> s;
    int k = 1;
    if (!(s[0] >= 'A' && s[0] <= 'Z'))
        k = 0;

    if (!(s[1] >= '1' && s[1] <= '9'))
        k = 0;

    for (int i = 2; i <= 6; i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
            k = 0;
    }

    if (!(s[7] >= 'A' && s[7] <= 'Z'))
        k = 0;

    if (k == 0)
        cout << "No";
    else
        cout << "Yes";
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
// wearepstu