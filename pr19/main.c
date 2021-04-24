#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>


void task_1(int m, int n)
{int key;

    printf("Рекурсия - %d\n", key=rec_1(m, n));
    printf("Проверка через цикл - %d\n", key);
}

int rec_1(int m, int n)
{
    if(m==0)
        return n+1;
    else if(n==0)
        return rec_1(m-1, 1);
    else if(m>0 && n>0)
        return rec_1(m-1, rec_1(m, n-1));
}




void task_2(int *a)
{int key=0, start=0,end=9, i;

for(i=0; i<10; i++)
{

    if(0<cos(a[i]) && cos(a[i])<0.5)
    {
        key++;
    }
}

printf("\nРекурсия - %d\n", rec_2(a, start, end));
printf("Проверка через цикл - %d\n", key);
}

int rec_2(int *a, int start, int end)
{
if(start==end)
{
    if(0<cos(a[start]) && cos(a[end])<0.5)
    {
       return 1;
    }
    else {return 0;}
}
else
{
    return rec_2(a, start, start+((end-start)/3)*2)+rec_2(a,start+((end-start)/3)*2+1 , end);
}
}

double rec_3(int n,double x, double eps, double Sn)
{
if(fabs(Sn)<eps)
return 0;
Sn*=(-1)*2*x/n;
++n;
return Sn + rec_3(n, x, eps, Sn);
}

void task_3()
{
int n=1;
double x, eps, S, Sn;
printf("x=");
scanf("%lf", &x);
while(!(x>=-2 && x<=-1))
{printf("x=");
scanf("%lf",&x);
}
printf("eps=");
scanf("%lf",&eps);
S=Sn=1;
S += rec_3(n,x,eps,Sn);
printf("S= %.2lf\n", S);
printf("e^(-2x)= %.2lf",exp(-2*x));
}


int main()
{setlocale(LC_ALL,"");
int number, i=0, a[10], max=10, min=10, n, m;
printf("Введите номер задания: ");
scanf("%d", &number);


   switch(number)
   {
    case 0: break;
    case 1: printf("Введите m и n: "); scanf("%d%d", &m, &n);
        task_1(m,n); break;
    case 2: {
            for(i=0; i<10; i++)
            {
             a[i]=min+rand()%max;
             printf("%d ", a[i]);
            }
            task_2(a); break;}
    case 3: task_3(); break;

   }
    return 0;
}

