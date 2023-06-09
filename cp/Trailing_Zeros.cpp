#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans = 0;
    cin >> n;
    while (n)
    {
        n /= 5;
        ans += n;
    }
    cout << ans << '\n';
}