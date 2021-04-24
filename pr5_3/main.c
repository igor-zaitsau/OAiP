
#include <stdio.h>
#include <stdlib.h>

int main()
{int co, me, h, ere, x, p;
x=scanf("%2d%*[!]%1d%*[@ 27 ;]%1d %*[98]%*[:,  , 34, #]%1d",&co, &me, &h, &ere);
printf("%d %d %d %d\n", co,me,h,ere);
printf("x=%d\n",x);
printf("me-h=%d\n", me-h);
p=co;
co=ere;
ere=p;
printf("%d %d", co, ere);

return 0;
}
