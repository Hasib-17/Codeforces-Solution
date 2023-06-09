/*Author: Hasib; Date:11/12/22*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<string>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
void solve()
{
    //*@[START]*//
    int n, k, cnt = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    int f = s.find_first_of('*'), l = s.find_last_of('*');
    if (f == l)
    {
        cout << 1 << '\n';
        return;
    }
    else
        cnt = 2;
    for (int i = f; i < l; i += k)
    {
        if (i + k >= l)
        {
            break;
        }
        if (s[i + k] == '*')
        {

            s[i + k] = 'x';
            cnt++;
        }
        else if (s[i + k] == '.')
        {
            for (int j = i + k - 1; j > i; j--)
            {
                if (s[j] == '*')
                {
                    s[j] = 'x';
                    cnt++;
                    i = j - k;
                    break;
                }
            }
        }
    }
    cout << cnt << '\n';
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