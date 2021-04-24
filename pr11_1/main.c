#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int U[10], min=0;
  int i, D[10], n,x=1,z;
printf ("Enter n: ");
scanf ("%d", &n);
  for (i=0; i<10; i++)
  {
    printf("U[%d] = ", i);
    scanf("%d", &U[i]);
    }
  for (i=0; i<10; i++)
  {D[i]=(1/tan(U[i]))/(n+1)-log(abs(n*U[i]));}
  for (i=0; i<10; i++)
  {
      printf("D[%d]=%d\n",i, D[i]);
  } for (i=0; i<10; i++) {
    if (D[i]<0)
  {
      x*=D[i];
  }

  } printf ("%d\n",x);
  for (i=0; i<10; i++){
    if (min>=D[i]) {min=D[i];}
  }printf ("%d\n",min);
  z=D[9];
  D[9]=min;
  min=z;
  printf ("D[9]=%d\n", D[9]);
  printf ("min=%d\n", min);



return 0;}
