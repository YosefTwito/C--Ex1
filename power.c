#include "myMath.h"
#include <stdio.h>

#define e 2.718281

double Pow (double x, int y){
double ans=1;
for (int i=0; i<y; i++){
ans=ans*x;
}
return ans;
}

double Exp (int x){
return Pow(e, x);
}
