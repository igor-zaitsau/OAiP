#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{float x,Z, n, y=1;

setlocale(LC_ALL,"");
printf("������� ���������� �����(���):");
scanf("%f",&x);
printf("�� ������� ������� �� ������ ������ � ����(���)?:");
scanf("%f",&n);
printf("C������ ��������� �������?:");
scanf("%f",&Z);
while (y<=n){
x+=x*Z/100;
y++;
}
printf("����� %.0f ���, � ��� ����� %.0f ������ ",n,x );

return 0;
}
