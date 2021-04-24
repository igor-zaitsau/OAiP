#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2,71828

int main()
{int  x, a, b;
float r5, u;
printf("Enter\n");
printf("x=");
scanf("%d",&x);
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
r5=(pow(x,2)/exp(a))+ 1/3.*pow(sin(x),2)-log(x);
u=((1+(pow(x,2)))*x)+exp(x)/(2*pow(x,2)+5)- a/b*cos(pow(x,3));
printf("r5=");
printf("%f\n",r5);
printf("u=");
printf("%f",u);

return 0;
}
