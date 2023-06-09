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
void max_hepify(vector<int> &arr, int i, int n)
{
    int largest = i;
    int child1 = 2 * i + 1;
    int child2 = 2 * i + 2;
    if (child1 < n && arr[largest] < arr[child1])
        largest = child1;
    if (child2 < n && arr[largest] < arr[child2])
        largest = child2;
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        max_hepify(arr, largest, n);
    }
}
void buildHeap(vector<int> &arr, int n)
{
    for (int i = n / 2; i >= 0; i--)
        max_hepify(arr, i, n);
}
void printHeap(vector<int> arr, int n)
{
    cout << "Array representation of Heap is:\n";

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
void solve()
{
    //*@[START]*//
    ll n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    buildHeap(arr, n);
    printHeap(arr, n);
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