#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="hellow world";
    s[2]='l';
    // s+=s2;
    // s.append(s2);
    // s.push_back('A');
    // s+='A';
    // s.pop_back();
    // string s2="gelo";
    // s=s2;
    // s.assign("gelo");

    s.erase(3,2);
    s.replace(6,5,"bangladesh");
    s.insert(5,"shuvo");
     
    cout<<s<<endl;

    return 0;
}