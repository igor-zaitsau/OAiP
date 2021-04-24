#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main()
{int x, b;
double y;
scanf("%d%d",&x,&b);
if (x<=4){
y=PI*pow(x,2)+ b * sin(x);}
  else {
  y=pow(cos(x),2)-1;}
  printf("%f",y);
    return 0;
}
