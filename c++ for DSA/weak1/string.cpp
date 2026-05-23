#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    // string s;
    cin.ignore();
    char s[100];
    cin.getline(s,100);
    cout<<s<<endl;
    return 0;
}