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
student  fun()
{
    student karim(2,5,4.00);
    return karim;

}
int main()
{
    student obj=fun();

    
    
    
   
     cout<<obj.roll<<" " <<obj.cls<<" "<<obj.gpa<<endl;
    return 0;
}