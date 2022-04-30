#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define P 0.32
float  calculatePayableDailySales(float number_of_drver, float average_sales );      // function prototype

int main()
{
    float amount,total,monday,tuesday,wdnesday,thursday,friday;
    float driver;

    printf("enter the number of driver for monday: ");
    scanf("%f",&driver);
    printf("enter the average for monday: ");
    scanf("%f",&amount);
     monday = calculatePayableDailySales(driver, amount);        // function call
    

     printf("enter the number of driver for tuesday: ");
    scanf("%f",&driver);
    printf("enter the average for tuesday: ");
    scanf("%f",&amount);
     tuesday = calculatePayableDailySales(driver, amount);        // function call
    

      printf("enter the number of driver for wdnesday: ");
    scanf("%f",&driver);
    printf("enter the average for wdnesday: ");
    scanf("%f",&amount);
     wdnesday = calculatePayableDailySales(driver, amount);        // function call
   
     printf("enter the number of driver for thursday: ");
    scanf("%f",&driver);
    printf("enter the average for thursday: ");
    scanf("%f",&amount);
     thursday = calculatePayableDailySales(driver, amount);        // function call
    
    printf("enter the number of driver for friday: ");
    scanf("%f",&driver);
    printf("enter the average for friday: ");
    scanf("%f",&amount);
    friday = calculatePayableDailySales(driver, amount);        // function call
  
   total=monday+tuesday+wdnesday+thursday+friday;

    printf("monday:    %.2f\n",monday);
    printf("tuesday:   %.2f\n",tuesday);
    printf("wdnesday:  %.2f\n",wdnesday);
    printf("thursday:  %.2f\n",thursday);
    printf("friday:    %.2f\n",friday);
    printf("Total weekly payable Amount(Ghc):    %.2f\n",total);
    


    return 0;
}

float  calculatePayableDailySales(float number_of_drver, float average_sales )        // function definition   
{
    float result;
    result = number_of_drver * P * average_sales;
    return result;                  // return statement
}