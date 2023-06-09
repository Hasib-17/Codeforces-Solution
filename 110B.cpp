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
// const ll N = 1e9;
string toBinary(int n) // always save in my codes:
{
    string r;
    while (n != 0)
    {
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}
void solve()
{
    int n;
    cin >> n;
    if (n < 5)
    {
        char a = 'a';
        for (int i = 0; i < n; i++)
        {
            cout << a;
            a++;
        }
        return;
    }
    int x = n / 4;
    int r = n % 4;
    string t = "abcd";
    for (int i = 0; i < x; i++)
        cout << t;
    for (int i = 0; i < r; i++)
    {
        cout << t[i];
    }
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
