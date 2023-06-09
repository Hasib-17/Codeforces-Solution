/*Author: Hasib; Date:26/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
const ll N = 1e7 + 1;
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
// vector<int> g(N);
void solve()
{
    //*[START]*//
    // char c[4][4];
    // for (int i = 0; i < 4; i++)
    // {
    //     // for (int j = 0; j < 4; j++)
    //     //     cin >> c[i][j];
    // }
    // bool ok=false;
    // // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if(c[i][j]==c[i][j+1] && j<3)
    //         {
    //             if(c[i+1][j]==c[i][j] && i<3)
    //             {
    //                 ok=true;
    //                 break;
    //             }
    //             else if (c[i + 1][j + 1] == c[i][j] && i < 3)
    //             {
    //                 ok = true;
    //                 break;
    //             }
    //         }
    //         else if(c[i][j]==c[i][j+1])
    //     }
    // }
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    bool ok = false;
    for (int i = 0; i < 4; i++)
    {
        if (s1[i] == s2[i])
        {
            if (i < 3 && (s1[i + 1] == s1[i] || s2[i + 1] == s2[i]))
            {
                ok = true;
                break;
            }
            else if (i == 3 && (s2[i - 1] == s2[i]))
            {
                ok = true;
                break;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (s2[i] == s3[i])
        {
            if (i < 3 && (s3[i + 1] == s3[i] || s2[i + 1] == s2[i]))
            {
                ok = true;
                break;
            }
            else if (i == 3 && (s3[i - 1] == s3[i]))
            {
                ok = true;
                break;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (s4[i] == s3[i])
        {
            if (i < 3 && (s3[i + 1] == s3[i] || s4[i + 1] == s4[i]))
            {
                ok = true;
                break;
            }
            else if (i == 3 && (s4[i - 1] == s4[i]))
            {
                ok = true;
                break;
            }
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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