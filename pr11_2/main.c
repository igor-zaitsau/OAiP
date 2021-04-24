#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float s, n, G[10], Sa=0, Sp=0, m=1, min, max;
int t=0;

printf("enter minimal element: ");
scanf("%f", &min);
printf("enter maximal element: ");
scanf("%f", &max);

s=(max-min)/9;

for(n=min; n<=max; n+=s){
G[t]=n;
printf("g[%d]=%.2f\n", t, G[t]);
t++;
}
for(t=0; t<10; ++t){
if(G[t]>0) {
Sp+=G[t];
}
else if(G[t]<0) {
Sa+=fabs(G[t]);
}
}

Sp-=Sa;
printf("%f",  Sp);

return 0;
}
