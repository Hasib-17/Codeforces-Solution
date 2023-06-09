/*Author: Hasib; Date:06/01/23*/
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
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
int g[100][100];
bool isPalindrome(string s)
{
    int length = s.size();
    stack<char> st;
    int i, mid = length / 2;
    for (i = 0; i < mid; i++)
        st.push(s[i]);
    if (length % 2 != 0)
        i++;
    while (s[i] != '\0')
    {
        char ele = st.top();
        st.pop();
        if (ele != s[i])
            return false;
        i++;
    }

    return true;
}
void solve()
{
    //*@[START]*//
    string s;
    cin >> s;
    if (isPalindrome(s))
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