#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        this->roll=roll; //main topic start from here
        this->cls=cls;
        this->gpa=gpa;
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