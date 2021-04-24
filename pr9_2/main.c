#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define k 4

int main(){
float f, x;
printf("Enter a variable x:");
scanf ("%f", &x);
do {
f=k*exp(x-2)/(x-2)+k*asin(fabs(x/15));

if(x==2){
    printf("Error\n");}
else{printf("f=%.3f x=%.3f\n",f,x);
}x+=0.35;}
while(x>=-1 && x<=7);


return 0;
}
