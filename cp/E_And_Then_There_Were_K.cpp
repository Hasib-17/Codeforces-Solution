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
string toBinary(int number)
{
    string binary;

    while (number > 0)
    {
        binary += (number % 2) + '0';
        number /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}
void solve()
{
    //*[START]*//
    int n, res = 0;
    cin >> n;
    // cout << toBinary(n) << '\n';
    string t = toBinary(n);
    int sz = t.size(), pw = 0;
    for (int i = sz - 1; i >= 0; i--)
    {
        int j = t[0] - '0';
        if (j == 0)
            j = 1;
        else
            j = 0;
        res += pow(2, pw);
        pw++;
    }
    cout << res << '\n';
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
