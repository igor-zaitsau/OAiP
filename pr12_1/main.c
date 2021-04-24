#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{setlocale(LC_ALL,"");
int n,i,j,k=2;
float o=0,max;
printf("n=");
scanf("%d",&n);
float P[n][n];

for(i=0;i<n;i++){
for(j=0;j<n;j++){
if (j<0)P[i][j]=pow(tan(1),2)-sqrt(1);
else P[i][j]=pow(tan(i),2)-sqrt(j);
if(P[1][j]>max)max=P[1][j];
o+=P[i][1];
if(P[1][j]>max)max=P[1][j];
printf("%.2f\t",P[i][j]);}printf("\n");}

max=P[1][0];
printf("Cумма элементов второго столбца: %.2f\n",o);
printf("Максимальный элемент второй строки: %.2f\n",max);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(P[i][j]<0){P[i][j]=2;}
printf("%.2f\t",P[i][j]);}printf("\n");}

return 0;
}
