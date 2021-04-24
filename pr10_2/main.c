#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{float x,Z, n, y=1;

setlocale(LC_ALL,"");
printf("Введите количество денег(руб):");
scanf("%f",&x);
printf("На сколько времени вы ложите деньги в банк(лет)?:");
scanf("%f",&n);
printf("Cколько процентов годовых?:");
scanf("%f",&Z);
while (y<=n){
x+=x*Z/100;
y++;
}
printf("Через %.0f лет, у вас будет %.0f рублей ",n,x );

return 0;
}
