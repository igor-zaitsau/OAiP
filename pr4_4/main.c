#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
long double h1;
double z;
float f;
long long int a;
long int t3;
int s2;
float o7;
short int ct;
unsigned char p;
int r;
int u;
printf("������� ���������� h1 ���� long double: ");
scanf("%lf",&h1);
printf("������� ���������� z ���� double: ");
scanf("%lf",&z);
printf("������� ���������� f ���� float: ");
scanf("%f",&f);
printf("������� ��������� a ���� long long: ");
scanf("%lli",&a);
printf("������� ���������� t3 ���� long: ");
scanf("%li",&t3);
printf("������� ���������� s2 ���� int: ");
scanf("%d",&s2);
printf("������� ���������� o7 ���� float: ");
scanf("%f",&f);
printf("������� ��������� ct ���� short: ");
scanf("%hi",&ct);
printf("������� ���������� p ���� unsigned char: ");
scanf("%hhu",&p);
printf("������� ���������� r ���� int: ");
scanf("%d",&r);
printf("������� �������� u ���� int: ");
scanf("%d",&u);
printf("\n%.4f\n%9f\n%6.2E;%6.2f;%6.2g;\n%f\n%x;%12d;%o\n%14.5d\n%d\n%8d\n%d\n", h1, z, f, f, f, o7, p, p, p, a, t3, s2, ct);//������ ��������. ����������� ����� ������!!!  ����������.

printf("\n%*lf\n", r, h1);
printf("\n%*.*lf\n", r, u, z);
printf("\n%.*f\n", r, o7);
printf("\n%*lli\n", r, a);

return 0;
}


