#include <stdio.h>
#include <stdlib.h>

int main()
{int x, y;
double f;
    scanf("%d%d",&x, &y);
    if (x>-2 && 2<y && y<10){
    f= sqrt(abs(pow(x,2)-pow(y,2)));}
    else if (x<-5 || y<2){
    f=log10(-x)+ 2 * y;}
    else {
    f=sin(y);}
    printf("%f", f);
    return 0;
}
