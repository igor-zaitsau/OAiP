#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{int m, n=2, x;
float y;
scanf("%d",&x);
scanf ("%d",&m);
for (n=2 ; n<m ; n+=1){
y=sin(2*n*x)/pow(n,2)-1;
}
printf("%d",y);

    return 0;
}
