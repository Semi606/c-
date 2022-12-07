#include <iostream>
#include <math.h>


int main()
{
    int a=2;
    float b=13.17;
    double y;
    std::cout<<"a=2; b=13.17";
    y=sqrt(0.5*std::log(double ((1-cos((a/b)*M_PI))/(1+cos((a/b)*M_PI))))*0.3*std::log(double ((1-sin((a/b)*M_PI))/(1+sin((a/b)*M_PI)))));
    std::cout<<" рішення: "<< y <<std::endl;
    return 0;
}