#include<bits/stdc++.h>
using namespace std;
int recur(int row,int col)
{
    if(row==1 || col==1)
    {
        return 1;
    }
    else
    {
        return recur(row-1,col)+recur(row,col-1);
    }
}
main()
{
    int n;
    cin>>n;
    cout<<recur(n,n);

}