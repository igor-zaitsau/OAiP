#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main()
{int b, a;
float z1, z2;
printf("Enter\n");
scanf("%d%d", &b, &a);
z1= pow(cos(a) - cos(b),2) - pow(sin(a) - sin(b),2);
z2= (-4.) * pow(sin((a-b)*1./2.),2) * cos(a+b);
printf("answers: %f; %f\n", z1, z2);
return 0;
}
