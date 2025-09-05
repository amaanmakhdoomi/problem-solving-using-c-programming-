#include <stdio.h>
#include <math.h>
int main()
{
   float ASI, ACI, P, T, R, SI, CI, n;
   printf("enter values for each to calculate simple interest");
   printf("\n principle amount(P)=\n");
   scanf("%lf",&P);
   printf("Time period(T)=\n");
   scanf("%lf",&T);
   printf("rate of interest(R)=\n");
   scanf("%lf",&R);
   SI = (P * R * T)/100;
   ASI = P + SI;
   ACI =  P * pow((1 + (R / 100)), T);
   printf("total amoount simple interest = %lf and compound interest = %lf", ASI, ACI);
   return 0;
}
