#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
float x, a, m, c, f, o, d, g, y;
setlocale (LC_ALL,"");

printf("������� �: ");
scanf("%f", &x);
if(x<0){
printf("������� a: ");
scanf("%f", &a);
if(x<a){
printf("������� �� ���������� ��� ��������� �.");
}
else{
printf("������� o: ");
scanf("%f", &o);
y=o*x/a;
printf("��� y=%f ", y);
}
}
else if(x==0){
printf("��� y=0");
}
else{
printf("������� m: ");
scanf("%f", &m);
if(x<m){
printf("������� f: ");
scanf("%f", &f);
y=f*x/m;
printf("��� y=%f ", y);
}
else{
printf("������� f: ");
scanf("%f", &f);
printf("������� c: ");
scanf("%f", &c);
if(x<c){
printf("������� o: ");
scanf("%f", &o);
y=((x-m)*(o-f))/(c-m)+f;
printf("��� y=%f ", y);
}
else{
printf("������� d: ");
scanf("%f", &d);
printf("������� o: ");
scanf("%f", &o);
if(x<=d){
printf("������� g: ");
scanf("%f", &g);
y=((x-c)*(g-o))/(d-c)+o;
printf("��� y=%f ", y);
}
else{
printf("������� �� ���������� ��� ��������� x.");
}
}
}
}
return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
float x, a, m, c, f, o, d, g, y;
setlocale (LC_ALL,"");

printf("������� �: ");
scanf("%f", &x);
if(x<0){
printf("������� a: ");
scanf("%f", &a);
if(x<a){
printf("������� �� ���������� ��� ��������� �.");
}
else{
printf("������� o: ");
scanf("%f", &o);
y=o*x/a;
printf("��� y=%f ", y);
}
}
else if(x==0){
printf("��� y=0");
}
else{
printf("������� m: ");
scanf("%f", &m);
if(x<m){
printf("������� f: ");
scanf("%f", &f);
y=f*x/m;
printf("��� y=%f ", y);
}
else{
printf("������� f: ");
scanf("%f", &f);
printf("������� c: ");
scanf("%f", &c);
if(x<c){
printf("������� o: ");
scanf("%f", &o);
y=((x-m)*(o-f))/(c-m)+f;
printf("��� y=%f ", y);
}
else{
printf("������� d: ");
scanf("%f", &d);
printf("������� o: ");
scanf("%f", &o);
if(x<=d){
printf("������� g: ");
scanf("%f", &g);
y=((x-c)*(g-o))/(d-c)+o;
printf("��� y=%f ", y);
}
else{
printf("������� �� ���������� ��� ��������� x.");
}
}
}
}
return 0;
}
