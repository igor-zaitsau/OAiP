#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{int n=1;
double x, eps, S, Sn;
printf("x=");
scanf("%lf", &x);
while(!(x>=-2 && x<=-1))
{printf("x=");
scanf("%lf",&x);
}
printf("eps=");
scanf("%lf",&eps);


S=Sn=1;
do {
Sn*=(-1)*2*x/n;
S+=Sn;
n++;

}
while (fabs(Sn)>=eps);
printf("S=%.15lf\n", S);
printf("%lf",exp(-2*x));

return 0;
}
