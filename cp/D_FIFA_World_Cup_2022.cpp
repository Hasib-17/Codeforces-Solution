#include <stdio.h>
int main()
{
    printf("Argentina\n");
    return 0; /*Author: Hasib; Date:08/02/23*/
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
    ll digit_sum(int h)
    {
        ll sum = 0;
        while (h > 0)
        {
            sum += (h % 10);
            h /= 10;
        }
        return sum;
    }
    void solve()
    {
        //*@[START]*//
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
}