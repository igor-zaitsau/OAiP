#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2,71828

int main()
{
    int k1, k2;
    float z,x ;
    scanf("%d %d %d", &k1, &k2, &x);
    printf("x\t\tz(x)\n");
    for(x=1.5; x<=6; x+=0.3){
        z=k1*1./exp(x) -  pow(log2(x*1.),3) - k2*1./(x-3);
        printf("%.3f\t\t%.3f\n",x, z);
    }
    return 0;
}
