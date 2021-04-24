#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define N 12


void task1(int Mass[]);
void task2(int Mass[]);
void task3(int Mass[]);
void task4(int Mass[]);
void task5(int Mass[]);
void task6(int Mass[]);
void task10(int Mass[], int key);
void task11(int Mass[], int key);
void task12(int Mass[], int key);
void task13(int Mass[], int key);
void task14(int Mass[], int key);
void vivod(int Mass[]);

int main()
{int Mass[N], min=-50, max=100, key, x;
int i;
setlocale(LC_ALL,"");
for(i=0; i<N; i++)
{
Mass[i]=min + rand()% max;
printf("%d ", Mass[i]);
}

while(x!=-1)
{
printf("\n\n1. Bubble sort(Пузырьковая)\n2. Insertion sort(Вставками)\n"
       "3. Selection sort(Выбором)\n4. Shaker sort(Шейкер)\n"
       "5. Shell sort(Шелла)\n6. Counting sort(Подсчётом)\n\n10. Прямой-последовательный поиск\n11. Бинарный поиск\n"
       "12. Поиск транспозицией\n13. Поиск с перемещением в начало\n"
       "14. Индексно-последовательный поиск\nВыход -1\n");
printf("Введите номер задания: ");
scanf("%d", &x);
switch(x)
{
case 1: {task1(Mass); break;}
case 2: {task2(Mass); break;}
case 3: {task3(Mass); break;}
case 4: {task4(Mass); break;}
case 5: {task5(Mass); break;}
case 6: {task6(Mass); break;}
case 10: {key=poisk(); task10(Mass, key); break;}
case 11: {key=poisk(); task11(Mass, key); break;}
case 12: {key=poisk(); task12(Mass, key); break;}
case 13: {key=poisk(); task13(Mass, key); break;}
case 14: {key=poisk(); task14(Mass, key); break;}
}}
return 0;
}


void task1(int Mass[]) // bubble
{int i, j, key, x;
printf("\n");
for(i=0; i<N; i++)
{
for(j=1;j<N; j++)
{
if(Mass[j]<Mass[j-1])
{
int swap=Mass[j];
Mass[j]=Mass[j-1];
Mass[j-1]=swap;
}
}
}
vivod(Mass);
}

void task2(int Mass[]) // insertion
{int i, j, swap;

for(i=1; i<N; i++)
{
    for(j=i; Mass[j]<Mass[j-1] && j>0; j--)
    {
        swap=Mass[j];
        Mass[j]=Mass[j-1];
        Mass[j-1]=swap;
    }
}

vivod(Mass);
}

void task3(int Mass[]) // selection
{int i, j ,min, swap;
for(i=0; i<N-1; i++)
{
min=i;
for(j=i+1; j<N; j++)
{
if(Mass[j]<Mass[min])
min=j;
}
    swap=Mass[i];
    Mass[i]=Mass[min];
    Mass[min]=swap;

}

vivod(Mass);
}

void task4(int Mass[]) // shaker
{int i, j, k, swap;
for(i=0; i<N; i++)
{
    for(j=0; j<N; j++)
    {
        if(Mass[j]>Mass[j+1])
        {
            swap=Mass[j];
            Mass[j]=Mass[j+1];
            Mass[j+1]=swap;
        }
    for(k=N; k>0; k--)
    {
        if(Mass[k]<Mass[k-1])
        {
            swap=Mass[k];
            Mass[k]=Mass[k-1];
            Mass[k-1]=swap;
        }
    }
    }
}
vivod(Mass);
}

void task5(int Mass[]) //shella
{int step, swap, i, size=N, j;
for (step=size/2; step>0; step/=2)
    {
        for (i=step; i<size; i++)
        {
            for (j = i-step; j>=0 && Mass[j] > Mass[j+step]; j-=step)
			{
				swap = Mass[j];
				Mass[j] = Mass[j + step];
				Mass[j + step] = swap;
			}

     }   }
vivod(Mass);
}

void task6(int Mass[]) // Counting
{


vivod(Mass);
}

void task10(int Mass[], int key)
{ int i;
for(i=0; i<N; i++)
{
if(Mass[i]==key)
{
printf("Mass[%d]=%d", i, key);
}
}
}

void task11(int Mass[], int key)
{int i, left=0, right=N, middle=(left+right)/2;
for(i=0; i<N/2; i++)
{
if(Mass[middle]==key){printf("Mass[%d]=%d", middle, key); break;}
else if(key>Mass[middle]){left=middle; middle=(left+right)/2;}
else {right=middle; middle=(left+right)/2;}
}
}

void task12(int Mass[], int key)
{int i, swap;
for(i=0; i<N; i++)
{
if(Mass[i]==key && i!=0)
{
swap=Mass[i];
Mass[i]=Mass[i-1];
Mass[i-1]=swap;
printf("Mass[%d]=%d", i, key);}
else if(Mass[i]==key && i==0)
{
printf("Mass[%d]=%d", i, key);
}
}
}

void task13(int Mass[], int key)
{int i, swap;
for(i=0; i<N; i++)
{
    if(Mass[i]==key)
    {
      swap=Mass[i];
      Mass[i]=Mass[0];
      Mass[0]=swap;
      printf("Mass[%d]=%d", i, key);

    }
}
}

void task14(int Mass[], int key)
{int i, B[8]={0};
for(i=0; i<N; i+=8)
{
  B[i]=Mass[i];
}
for(i=0; i<8; i+=8)
{
    if(key==B[i])
    {
         printf("Mass[%d]=%d", i, key); break;
    }
    else if(key>B[i] && key<B[i+7])
    {
        for(i=1; i<i+7;i++)
        {
            if(Mass[i]==key)
            {
                printf("Mass[%d]=%d", i, key); break;
            }
        }
    }
    else
    {
        for(i=9; i<N; i++)
        {
            if(Mass[i]==key)
            {
                printf("Mass[%d]=%d", i, key); break;
            }
        }
    }
}
}


int poisk()
{ int key;
printf("Введите число которое хотите найти: ");
scanf("%d", &key);
return key;
}

void vivod(int Mass[])
{ int i;
for(i=0; i<N; i++)
{
printf("%d ", Mass[i]);
}
}
