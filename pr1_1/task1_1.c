#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "");
printf("Zaytsev Igor Sergeevich\n");
printf("Зайцев Игорь Сергеевич\n");
int x;
x=5;
printf("x=%d\n", x);
int y;
y=2;
printf("y=%d\n", y);
printf("x+y=%d\n", x+y );
printf("x-y=%d\n", x-y );
printf("x*y=%d\n", x*y );
printf("x/y=%d\n", x/y );
return 0;
}
