#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define discount  0.1
#define price_of_egg  1.2


/*
    Name 
    Index Number: 3076920
    Reference Number: 20454480
    Program: Bsc Telecommunication Engoineering 
    Date: 8th April, 2022ls
    
    Task:coding assignment 4
    */
float  calculateFoodPrice(float BG, float RP, float PR );      // function prototype

int main()
{
    float monday,tuesday,wednesday,thursday,friday;
     float mon,tues,wed,thur,fri;
    float a=600, b=610, c=580, d=600, e=670;
    mon = calculateFoodPrice(2, 1,2);        // function call
    monday=(mon*a)-(mon*discount*a);
    
     tues = calculateFoodPrice(3,2, 2);        // function call
    tuesday=(tues*b)-(tues*discount*b);
    
     wed = calculateFoodPrice(2.5,2,1.5);        // function call
     wednesday=(wed*c)-(wed*discount*c);
     thur = calculateFoodPrice(1.5,2,1.5);        // function call
    thursday=(thur*d)-(thur*discount*d);
    fri = calculateFoodPrice(2,2,2);        // function call
    friday=(fri*e)-(fri*discount*e);
    
   float  total_sales=monday+tuesday+wednesday+thursday+friday;

    printf("Monday:    \t %.2f\n",monday);                  // output
    printf("Tuesday:  \t %.2f\n",tuesday);
    printf("Wednesday: \t %.2f\n",wednesday);
    printf("Thursday: \t %.2f\n",thursday);
    printf("Friday:   \t %.2f\n",friday);
    printf("****************************************\n");
    printf("Total sales(Ghc):   \t %.2f\n",total_sales);
    printf("****************************************\n");


    return 0;
}

float  calculateFoodPrice(float BG, float RP, float PR )         // function definition   
{
     float total;
     total= BG + RP + PR + price_of_egg ;
     //float a=600;
    //float result= (total*a)-(total*discount*a);
   
    return total;                  // return statement
}