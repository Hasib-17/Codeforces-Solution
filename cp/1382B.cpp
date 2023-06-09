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
    //*[START]*//
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int f = 0, s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        { // f

            if (v[i] == 1)
            {
                f = 1;
                // cout << f << ' ';
            }
            else if (v[i] > 1 && v[i + 1] == 1)
                f = 1;
            else if (v[i] > 1 && v[i + 1] > 1)
            {

                if (i == n - 2)
                {
                    f = 1;
                    s = 0;
                }
                else
                    f = 0;
            }
        }
        else if (!f) // f move
        {
            if (v[i] == 1)
                f = 1;
            else if (v[i] > 1 && v[i + 1] > 1)
            {
                if (i == n - 2)
                {
                    f = 1;
                    s = 0;
                }
                else
                    f = 0;
            }
            else if (v[i] > 1 && v[i + 1] == 1)
            {
                s = 0;
                f = 1;
            }
        }
        else if (!s) // s
        {
            if (v[i] == 1)
            {
                if (i == n - 2)
                {
                    f = 1;
                    s = 0;
                    break;
                }
                else
                    s = 1;
            }
            else if (v[i] > 1 && v[i + 1] > 1)
            {
                if (i == n - 2)
                {
                    f = 0;
                    s = 1;
                    break;
                }
                else
                    s = 0;
            }
            else if (v[i] > 1 && v[i + 1] == 1)
            {
                s = 1;
                f = 0;
                if (i == n - 2)
                {
                    f = 0;
                    s = 1;
                    break;
                }
                else
                    s = 1;
            }
        }
    }
    if (n == 1)
    {
        f = 1, s = 0;
    }
    if (f)
        cout << "First\n";
    else
        cout << "Second\n";
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