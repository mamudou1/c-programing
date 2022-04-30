#include <stdio.h>

const double watermelon=4;
const double pineaple=5;
const double orange=1;
const double grapes=7;

int main(){
    double w,p,o,g;
 printf("*************************\n");
printf ("Quantity of watermelon: ");
scanf("%lf",&w);

printf("Quantity of pineaple: ");
scanf("%lf",&p);

printf("Quantity of orange: ");
scanf("%lf",&o);

printf("Quantity of grapes: ");
scanf("%lf",&g);
 printf("*************************\n");
void stars(void);
double sum=w+p+o+g;
//printf("%.2lf\n",sum);

if (sum<=2)
{
   double  sum_of_the_fruit1=watermelon*w + pineaple*p + orange*o + grapes*g;
   double dis=sum_of_the_fruit1*0;
   double amount=sum_of_the_fruit1 - dis;
     printf("Total Amt (GHC):\t%.2lf\n",sum_of_the_fruit1);
     printf("Discount (GHC):\t%.2lf\n",dis);
     printf("Amount Payable (GHC):\t%.2lf\n",amount);
     printf("*************************\n");
}
else if (sum>2 && sum<=5)
{
   double  sum_of_the_fruit1=watermelon*w + pineaple*p + orange*o + grapes*g;
   double dis=sum_of_the_fruit1*0.02;
   double amount=sum_of_the_fruit1 - dis;
     printf("Total Amt (GHC):\t%.2lf\n",sum_of_the_fruit1);
     printf("Discount (GHC):\t%.2lf\n",dis);
     printf("Amount Payable (GHC):\t%.2lf\n",amount);  
     printf("*************************\n");
}
else if (sum>5 && sum<=10)
{
 double  sum_of_the_fruit1=watermelon*w + pineaple*p + orange*o + grapes*g;
   double dis=sum_of_the_fruit1*0.05;
   double amount=sum_of_the_fruit1 - dis;
     printf("Total Amt (GHC):\t%.2lf\n",sum_of_the_fruit1);
     printf("Discount (GHC):\t%.2lf\n",dis);
     printf("Amount Payable (GHC):\t%.2lf\n",amount);
     printf("*************************\n");
}
else if (sum>10)
{
    double  sum_of_the_fruit1=watermelon*w + pineaple*p + orange*o + grapes*g;
   double dis=sum_of_the_fruit1*0.1;
   double amount=sum_of_the_fruit1 - dis;
     printf("Total Amt (GHC):\t%.2lf\n",sum_of_the_fruit1);
     printf("Discount (GHC):\t%.2lf\n",dis);
     printf("Amount Payable (GHC):\t%.2lf\n",amount); 
     printf("*************************\n");
}
else{
  printf("error");
}
    return 0;
}

