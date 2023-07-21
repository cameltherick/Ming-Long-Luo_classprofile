#include <iostream>
#include <cmath>
using namespace std;

struct infor{
        double w;
        double h;
};

double BMI(double h, double w)
{
    return w/(h*h);
}
int main()
{
    infor person;
    cin>>person.w;
    cin>>person.h;
    person.h/=100;
    double bmi = BMI(person.h, person.w);
    bmi=round(bmi*10)/10;
    cout<<bmi<<"\n";
    if(bmi<18.5) cout<<"Lightweight";
    else if(bmi<24) cout<<"perfect";
    else if(bmi<27) cout<<"Moderately obese";
    else cout<<"fatty";
    return 0;
}
