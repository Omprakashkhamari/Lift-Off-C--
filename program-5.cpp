#include<iostream>
using namespace std;
int main()
{
    float r, diameter,area, circumference;
    cout<<"Enter the Radius of Circle: ";
    cin>>r;
    diameter = 2*r;
    cout<<"\ndiameter of the circle = "<<diameter;
    area = 3.14*r*r;
    cout<<"\nArea of Circle = "<<area;
    circumference = 2*3.14*r;
    cout<<"\nCircumference of Circle = "<<circumference;
    return 0;
}