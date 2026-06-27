#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0;i<a.size();i++)
        {
            cin>>a[i];
        }
        int flag=0;
           for (int i=0;i<a.size()-1;i++)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}