#include <bits/stdc++.h>

using namespace std;
class Student

{
    public:
    string name;
    int roll;
    Student(string name,int roll )
    {
        this->name=name;
        this->roll=roll;

    }
    void hello()
    {
        cout<<"hello"<<name<<endl;
    }

};
int main()
{
    Student shuvo("mahamudul",35);
    // cout<<shuvo.name<<" "<<shuvo.roll<<endl;
    shuvo.hello();
    Student rakib("rakib ahmed", 45);
    rakib.hello();
    return 0;
}