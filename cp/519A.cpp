/*Author: Hasib; Date:06/01/23*/
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
    int s = 0, l = 0;
    vector<string> st;
    for (int i = 0; i < 8; i++)
    {
        string t;
        cin >> t;
        for (auto k : t)
        {
            if (k == '.' || k == 'k' || k == 'K')
                continue;
            else if (k > 'a')
            {
                if (k == 'q')
                    s += 9;
                else if (k == 'r')
                    s += 5;
                else if (k == 'b' || k == 'n')
                    s += 3;
                else if (k == 'p')
                    s++;
            }
            else
            {
                if (k == 'Q')
                    l += 9;
                else if (k == 'R')
                    l += 5;
                else if (k == 'B' || k == 'N')
                    l += 3;
                else if (k == 'P')
                    l++;
            }
        }
    }
    if (l > s)
        cout << "White\n";
    else if (s > l)
        cout << "Black\n";
    else
        cout << "Draw\n";
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