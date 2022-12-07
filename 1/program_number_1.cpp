#include <iostream>
#include <math.h>


int main()
{
    int a=4;
    float b=0.5;
    double y;
    std::cout<<"a=4; b=0,5";
    y=(0.75*sqrt(b)-1/2*cbrt(a)*sin(b*(M_PI/3)));
    std::cout<<" рішення: "<< y <<std::endl;
    return 0;
}