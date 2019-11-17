#include <stdio.h>
#include "myMath.h"

int main(){

printf("please insert a real number: \n");
double xv;
scanf("%lf", &xv);

float f1 = sub(add(Exp(xv),Pow(xv,3)),2);
printf("The value of f(x)=e^x+x^3-2 at point %0.4lf = %0.4f \n",xv ,f1);
float f2 = add(mul(xv,3),mul(Pow(xv,2),2));
printf("The value of f(x)=3x+2x^2 at point %0.4lf = %0.4f \n",xv ,f2);
float f3 = div(mul(Pow(xv,3),4),sub(5,mul(xv,2)));
printf("The value of f(x)=(4x^3)/(5-2x) at point %0.4lf = %0.4f \n",xv ,f3);

return 0;
}
