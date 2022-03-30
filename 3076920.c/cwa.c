#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 /*
    Name 
    Index Number: 3076920
    Reference Number: 20454480
    Program: Bsc Telecommunication Engoineering 
    Date: 24th March, 2022
    Task:coding assignment 2
    */

int main(){
 int semiconductor, analog_communication, c_programiing, circuit_theory, differetial_equation;
 int semiconductor_credit_hour, analog_communication_credit_hour, c_programiing_credit_hour, circuit_theory_credit_hour, differetial_equation_credit_hour;
  printf("enter your semiconductor score: ");
   scanf("%d",&semiconductor);
    printf("enter your credit hour for semiconductor : ");
   scanf("%d",&semiconductor_credit_hour);
    int score1= semiconductor*semiconductor_credit_hour;

   printf("enter your analog communication score: ");
   scanf("%d", &analog_communication);
   printf("enter your credit hour for analog communication: ");
   scanf("%d", &analog_communication_credit_hour);
   int score2=analog_communication*analog_communication_credit_hour;
  
   printf("enter your C programiing score: ");
    scanf("%d", &c_programiing);
    printf("enter your credit hour for C programiing : ");
    scanf("%d", &c_programiing_credit_hour);
    int score3=c_programiing*c_programiing_credit_hour;

  printf("enter your circuit theory score: ");
  scanf("%d", &circuit_theory);
   printf("enter your credit hour for circuit theory: ");
  scanf("%d", &circuit_theory_credit_hour);
  int score4=circuit_theory*circuit_theory_credit_hour;

    printf("enter your differetial equation score: ");
    scanf("%d", &differetial_equation);
    printf("enter your credit hour for differetial equation : ");
    scanf("%d", &differetial_equation_credit_hour);
    int score5=differetial_equation*differetial_equation_credit_hour;

    int toatal_score = score1+score2+score3+score4+score5;
    int totol_credit_hour = semiconductor_credit_hour+analog_communication_credit_hour+c_programiing_credit_hour+circuit_theory_credit_hour+differetial_equation_credit_hour;
    double semester_average= toatal_score/totol_credit_hour;
    printf("Your semester avearage is %.2f",semester_average);

}