#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>v){
    cout<<"Size :"<<" "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    v.push_back(7);
    cout<<endl;
    
}
main()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVector(v);
    
}