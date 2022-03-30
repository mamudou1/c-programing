#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
    Name 
    Index Number: 3076920
    Reference Number: 20454480
    Program: Bsc Telecommunication Engoineering 
    Date: 26th March, 2022
    Task:coding assignment 2
    */

int main(){
double  garri_bean, ripe_platain, plain_rice, egg, discount_in_percentage; // declare the input vaiable 
printf("Enter the amont you want for Garri and beans(GHC): ");   // taking the price from the customer
scanf("%lf",&garri_bean);


printf("Enter the amont you want for Ripe Platain(GHC): ");
scanf("%lf",&ripe_platain);

printf("Enter the amont you want for Plain Rice(GHC): ");
scanf("%lf",&plain_rice);

printf("Enter the amont you want for Egg(GHC): ");
scanf("%lf",&egg);

double sub_total=garri_bean+ripe_platain+plain_rice+egg;

printf("Disount(percentage): ");
scanf("%lf",&discount_in_percentage);
double discount= sub_total*discount_in_percentage*0.01;

 printf("Sub-Total: %.2f\n",sub_total);
 printf("Discount: %.2f\n",discount);


 double total= sub_total - discount;
 printf("Total(GHC): %.2f\n",total);

    
}
