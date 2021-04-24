#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define d 2.075
#define c 2.26


int main()
{
setlocale(LC_ALL,"");
int y;
float n, x, o;

printf("Введите количество долларов:\n");
scanf("%f",&n);
x=n*d;
printf("%f рублей\n", x);
y=x/c;
o=(x/c-y)*c;
printf("У вас будет %d евро и %f рублей\n", y, o);
return 0;
}
