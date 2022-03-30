#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3;
    printf("enter number1: ");
    scanf("%d",&number1);
      printf("enter number2: ");
    scanf("%d",&number2);
      printf("enter number3: ");
    scanf("%d",&number3);
    int sum= number1 + number2 + number3;

  double  avg = sum/3.0;
    printf("the average of %d, %d and %d is %.2f\n", number1, number2, number3,avg);
    return 0;
}
