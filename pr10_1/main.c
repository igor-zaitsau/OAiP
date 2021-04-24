#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
float x, a, m, c, f, o, d, g, y;
setlocale (LC_ALL,"");

printf("Введите х: ");
scanf("%f", &x);
if(x<0){
printf("Введите a: ");
scanf("%f", &a);
if(x<a){
printf("Функция не определена для заданного х.");
}
else{
printf("Введите o: ");
scanf("%f", &o);
y=o*x/a;
printf("Ваш y=%f ", y);
}
}
else if(x==0){
printf("Ваш y=0");
}
else{
printf("Введите m: ");
scanf("%f", &m);
if(x<m){
printf("Введите f: ");
scanf("%f", &f);
y=f*x/m;
printf("Ваш y=%f ", y);
}
else{
printf("Введите f: ");
scanf("%f", &f);
printf("Введите c: ");
scanf("%f", &c);
if(x<c){
printf("Введите o: ");
scanf("%f", &o);
y=((x-m)*(o-f))/(c-m)+f;
printf("Ваш y=%f ", y);
}
else{
printf("Введите d: ");
scanf("%f", &d);
printf("Введите o: ");
scanf("%f", &o);
if(x<=d){
printf("Введите g: ");
scanf("%f", &g);
y=((x-c)*(g-o))/(d-c)+o;
printf("Ваш y=%f ", y);
}
else{
printf("Функция не определена для заданного x.");
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

printf("Введите х: ");
scanf("%f", &x);
if(x<0){
printf("Введите a: ");
scanf("%f", &a);
if(x<a){
printf("Функция не определена для заданного х.");
}
else{
printf("Введите o: ");
scanf("%f", &o);
y=o*x/a;
printf("Ваш y=%f ", y);
}
}
else if(x==0){
printf("Ваш y=0");
}
else{
printf("Введите m: ");
scanf("%f", &m);
if(x<m){
printf("Введите f: ");
scanf("%f", &f);
y=f*x/m;
printf("Ваш y=%f ", y);
}
else{
printf("Введите f: ");
scanf("%f", &f);
printf("Введите c: ");
scanf("%f", &c);
if(x<c){
printf("Введите o: ");
scanf("%f", &o);
y=((x-m)*(o-f))/(c-m)+f;
printf("Ваш y=%f ", y);
}
else{
printf("Введите d: ");
scanf("%f", &d);
printf("Введите o: ");
scanf("%f", &o);
if(x<=d){
printf("Введите g: ");
scanf("%f", &g);
y=((x-c)*(g-o))/(d-c)+o;
printf("Ваш y=%f ", y);
}
else{
printf("Функция не определена для заданного x.");
}
}
}
}
return 0;
}
