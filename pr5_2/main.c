#include <stdio.h>
#include <stdlib.h>

int main()
{int oh, co, m, u, x;

x=scanf("%d %*d %d %*d %d %d %*d %*d",&oh, &co, &m, &u);

printf ("%d %d %d %d\n",oh,co,m,u);

printf("x=%d\n",x);

printf ("oh=%d\n",oh);
printf ("oh=%d\n",++oh);
printf ("oh=%d\n\n",oh);

printf ("co=%d\n",co);
printf ("co=%d\n",co++);
printf ("co=%d\n\n",co);

printf ("m=%d\n",m);
printf ("m=%d\n",--m);
printf ("m=%d\n\n",m);

printf ("u=%d\n",u);
printf ("u=%d\n",u--);
printf ("u=%d\n\n",u);



    return 0;
}
