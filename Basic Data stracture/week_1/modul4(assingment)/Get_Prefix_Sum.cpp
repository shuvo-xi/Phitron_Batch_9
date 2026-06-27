#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long int>a(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    vector<long long int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i <n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
     reverse(pre.begin(),pre.end());
    // for(auto it=pre.begin();it!=pre.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(long long int x:pre)
    {
        cout<<x<<" ";
    }                                             
    return 0;
}