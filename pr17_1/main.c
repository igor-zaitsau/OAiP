#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ int *q,*w,*e,*r,*t,*y,*u;
  int U[10], min=0;
  int i, D[10], n,x=1,z;
printf ("Enter n:");
scanf ("%d", &n);
q=U;
w=&min;
e=&i;
r=D;
t=&n;
y=&x;
u=&z;


  for (i=0; i<10; i++)
  {
    printf("U[%d] = ", *e);
    scanf("%d", &U[i]);
    }
  for (i=0; i<10; i++)
  {D[i]=(1/tan(U[i]))/(n+1)-log(abs(n*U[i]));}
  for (i=0; i<10; i++)
  {
      printf("D[%d]=%d\n",*e, *r);
      *r++;
  } for (i=0; i<10; i++) {
    if (D[i]<0)
  {
      *y*=D[i];
  }

  } printf ("%d\n",*y);
  for (i=0; i<10; i++){
    if (*w>=D[i]) {*w=D[i];}
  }printf ("%d\n",*w);
  *u=D[9];
  D[9]=*w;
  *w=*u;
  printf ("D[9]=%d\n", *(D + 9));
  printf ("min=%d\n", *w);



return 0;}
