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

printf("������� ���������� ��������:\n");
scanf("%f",&n);
x=n*d;
printf("%f ������\n", x);
y=x/c;
o=(x/c-y)*c;
printf("� ��� ����� %d ���� � %f ������\n", y, o);
return 0;
}
