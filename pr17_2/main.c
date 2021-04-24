#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{setlocale(LC_ALL,"");
int *q,*w,*e,*r,*t;
float *l,*v, *mass;
int n,i=0,j,k=2,min1;
float o=0,max;
printf("n=");
   scanf("%d",&n);
float P[n][n];

q=&n;
w=&i;
e=&j;
r=&k;
t=&min1;
l=&o;
v=&max;
mass=P;

   for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if (*e<0)*mass=pow(tan(1),2)-sqrt(1);
                else *mass=pow(tan(i),2)-sqrt(j);

   printf("%.2f\t",*mass);
   *mass++;
   }printf("\n");}


   for(i=0;i<n;i++){
      *l+=P[i][1];}
printf("Cумма элементов второго столбца: %.2f\n",*l);

*v=P[1][0];
for(j=0;j<n;j++){
                    if(P[1][j]>*v)*v=P[1][j];}
            printf("Максимальный элемент второй строки: %.2f\n",*v);

*t=P[0][0];
for(i=0;i<10;i++){
for(j=0;j<10;j++){
    if(P[i][j]<*t){*t=P[i][j];}}}
printf("%lf\n",*t);

for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(P[i][j]<0){P[i][j]=2;}
  printf("%.2f\t",P[i][j]);
  }
  printf("\n");
}
    return 0;
}
