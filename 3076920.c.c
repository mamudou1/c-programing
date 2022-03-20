#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    /*
    Name 
    Index Number: 3076920
    Reference Number: 20454480
    Program: Bsc Telecommunication Engoineering 
    Date: 18th March, 2022
    Task:coding assignment 1
    */
    float H=19.5, L=20.0, W=10.5 ;   // declare of variable height(H), length(L) and width(W)
    float Area;   
    Area= ((L*W)+(W*H)+(L*H)) + ( (L*W)+(W*H)+(L*H));   // calculate tht total surfacr area 
    printf("The total surface area of the cuboid is  %.2f square centimeter\n",Area);  // print the answer 
    return 0;
}
