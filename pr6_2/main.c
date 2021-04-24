#include <stdio.h>
#include <stdlib.h>

int main()
{int  a, b;
printf("Enter a and b:\n");
scanf("%x%x", &a, &b);
printf("a=%d b=%d\n",~a,~b);
printf("a=%x b=%x\n\n",~a,~b);

printf("a=%d b=%d a=%d b=%d\n",a, b, a<<10, b>>7);
printf("a=%x b=%x a=%x b=%x\n\n",a, b, a<<10, b>>7);

printf("a=%d\n",a<<3 & b>>7);
printf("b=%x\n\n",a<<3 & b>>7);

printf("a=%d\n",a | b);
printf("b=%x\n\n",a | b);

    return 0;
}
