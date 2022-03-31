#include<stdio.h>
#define PI 3.142
double circumference(double radius){
    return 2*PI*radius;
}
int main()
{
double c = circumference(5.0);
printf("%f\n",c);
}
