#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{setlocale(LC_ALL,"");
int sum=0, n,i,j,k;
float min=0;
printf("n=");
scanf("%d",&n);
float P[n][n];
for(i=0;i<n;i++){
for(j=0;j<n;j++){
P[i][j]=5*j*i-11;
    printf("P[%d][%d]=%.2f\t",i+1,j+1,P[i][j]);
    if (i+j+1>n && P[i][j]<0){sum+=P[i][j];}
      if(i==j && P[i][j]<=min){min=P[i][j];k=j;}}
    printf("\n");
  }
if (sum==0) {printf("нет отрицательных ниже побочной диагонали\n");}
else {printf("%d сумма\n", sum);}
for(i=0;i<n;i++){

printf("G[%d][%d]=%f\n",i+1,k+1,P[i][k]);
}
    return 0;
}
