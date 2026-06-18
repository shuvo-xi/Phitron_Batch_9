#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="hellow world";
    for(string:: iterator is=s.begin();is<s.end();is++)
    {
        cout<<*is<<endl;
    }
    for(auto is=s.begin();is<s.end();is++)
    {
        cout<<*is<<endl;
    }
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;

    return 0;
}