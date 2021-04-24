#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>

int main()
{setlocale(LC_ALL,"");
int n, *q, i, *w, j, *e, k;
q=&n;
printf("n=");
scanf("%d", q);
float min=0,sum=0, men=-2, max=2, P[n][n];
float *z, *t, *x, *c, *mass;
w=&i;
e=&j;
z=&min;
t=&sum;
x=&men;
c=&max;
mass=P;

srand(time(NULL));
for(*w=0; *w<*q; (*w)++){
for(*e=0; *e<*q; (*e)++){
P[*w][*e]=(float)rand()/RAND_MAX*(*c-*x)+*x;
printf("P[%d][%d]=%.2f\t", *w+1, *e+1, P[*w][*e]);
if (*w+*e+1>*q && P[*w][*e]<0){*t+=P[*w][*e];}
if(*w==*e && P[*w][*e]<=min){*z=P[*w][*e];
k=j;}}
printf("\n");
}
if (*t==0) {printf("нет отрицательных ниже побочной диагонали\n");}
else {printf("%f сумма элементов ниже побочной диагонали\n", *t);}

for(*w=0; *w<*q; (*w)++){
printf("G[%d][%d]=%f\n",*w+1,k+1,P[*w][k]);
}
return 0;
}
