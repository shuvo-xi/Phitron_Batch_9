#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="hello";
    //1
    string s("hello");
    //2
    string s("hello",4);
    cout<<s<<endl;
    //3
    string s(5,'b');
    //4
    string s="hellow world";
    string t(s,2);
    return 0;
}