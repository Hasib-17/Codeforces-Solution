#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    map<long long int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        if (mp.count(k - x))
        {
            cout << mp[k - x] << ' ' << i << '\n';
            return 0;
        }
        mp[x] = i;
    }
    cout << "IMPOSSIBLE\n";
}