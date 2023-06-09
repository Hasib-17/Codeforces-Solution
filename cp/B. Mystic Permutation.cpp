#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int temp=a[0];
        for ( i = 0; i < n; i++)
        {
            a[i]=a[i+1];
            temp=a[i];
            a[i+1]=temp;
        }
        for ( i = 0; i < n; i++)
        {
            cout<<a[i];
        }
    }
}