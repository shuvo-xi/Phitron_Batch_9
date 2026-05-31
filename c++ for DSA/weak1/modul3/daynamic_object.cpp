#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int cls;
    int roll;
    double gpa;
    student(int roll, int cls, double gpa)
    {
        this->roll =roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};


int main()
{
    student*p=new student(5,8,3.61);
    cout << p->cls<< " " <<p->gpa << " " << p->roll << endl;
    return 0;
}