#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    int x, y, z, v;
    setlocale (0,"Russian");
    printf("Введите x, y, z\n");
    scanf("%d%d%d", &x, &y, &z);
    v = ((x*y)*pow(z,3))+ ((2- pow((x-y),3))) / abs(5 - pow(x,2)*y) + pow(x+y+y,x*y-z);
    printf("Ответ %d", v);
    return 0;
}
