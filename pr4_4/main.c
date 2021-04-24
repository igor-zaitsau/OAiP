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
printf("¬ведите переменную h1 типа long double: ");
scanf("%lf",&h1);
printf("¬ведите переменную z типа double: ");
scanf("%lf",&z);
printf("¬ведите переменную f типа float: ");
scanf("%f",&f);
printf("¬ведите перменную a типа long long: ");
scanf("%lli",&a);
printf("¬ведите переменную t3 типа long: ");
scanf("%li",&t3);
printf("¬ведите переменную s2 типа int: ");
scanf("%d",&s2);
printf("¬ведите переменную o7 типа float: ");
scanf("%f",&f);
printf("¬ведите перменную ct типа short: ");
scanf("%hi",&ct);
printf("¬ведите переменную p типа unsigned char: ");
scanf("%hhu",&p);
printf("¬велите переменную r типа int: ");
scanf("%d",&r);
printf("¬ведите пеменную u типа int: ");
scanf("%d",&u);
printf("\n%.4f\n%9f\n%6.2E;%6.2f;%6.2g;\n%f\n%x;%12d;%o\n%14.5d\n%d\n%8d\n%d\n", h1, z, f, f, f, o7, p, p, p, a, t3, s2, ct);//ужасно написано. разобратьс€ очень сложно!!!  ѕеределать.

printf("\n%*lf\n", r, h1);
printf("\n%*.*lf\n", r, u, z);
printf("\n%.*f\n", r, o7);
printf("\n%*lli\n", r, a);

return 0;
}


