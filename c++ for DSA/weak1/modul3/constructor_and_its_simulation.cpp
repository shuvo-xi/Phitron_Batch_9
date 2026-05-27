#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;
    student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main()
{
    student rahim(45,5,3.41);
    student karim(2,5,4.00);
    
    cout<<rahim.roll<<" " <<rahim.cls<<" "<<rahim.gpa<<endl;
     cout<<karim.roll<<" " <<karim.cls<<" "<<karim.gpa<<endl;
    return 0;
}