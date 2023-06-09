#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<int>v={2,3,4,5,6,88};

   // vector<int> :: iterator it ;
    // for(auto it=v.begin();it!=v.end();++it) //ekhane auto use korle upore iterator declare korar dorkar nai
    // {
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;
    v.pop_back();
    v.pop_back();
 for(auto value : v)
 {
    cout<<value<<" ";
 }
 cout<<endl;

 vector<vector<int>> vv;
 int N,j,i;
 cin>>N;
 for( j=0;j<N;j++){
    int n;
    cin>>n;
    vector<int> temp;
    for( i=0;i<n;i++)
    {
      int x;
      cin>>x;
      temp.push_back(x);

    }
    vv.push_back(temp);

 }
//  for(auto &value1 : vv)
//  {
//     cout<<value1[j]<<" ";
//  }

}