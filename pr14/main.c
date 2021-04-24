#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <locale.h>


void bubbleSort(int Mass[10], int size)
{for (int i=0; i<10-1; i++)
  {
    for (int j=(size-1); j>i; j--)
    {
        if (Mass[j-1]>Mass[j])
        {
        swap(&Mass[j], &Mass[j-1]);
      }
    }
  }
}

int simpleSearch (int Mass[10], int num[10], int size, int value)
{
    int j=0;
    for (int i=0; i<size; i++)
        {
            if (Mass[i]==value)
                {
                    num[j++]=i;
                }
        }

    return j;
}

int binarySearch(int Mass[10], int left, int right, int value)
{
    if (left<right)
    {
        int medium=(left+right)/2;
        if (Mass[medium]<value)
            {
                return binarySearch(Mass, medium+1, right, value);}
        else if (Mass[medium]>value)
        {
            return binarySearch(Mass, left, medium-1, value);}
        else
        {return medium;}
    } else if (left==right && Mass[left]==value)
    {return left;}
    else {return -1;}
}

void out(int Mass[10], int size)
{
    for(int i=0; i<size; i++)
        {
            printf("%d ", Mass[i]);
        }
    printf("\n");}



int transposSearch(int Mass[10], int size, int value)
{
    if (Mass[0]==value){return 0;}
    else
        {for (int i=1; i<size;i++)
        {if (Mass[i]==value){
                swap(&Mass[i],&Mass[i-1]);
                return i;}}}
    return -1;
}

int searchNear(int Mass[10], int size, int pos)
{
    if (pos!=-1)
    {
        int j=1;
        int temp=pos-1;
        while (temp>=0 && Mass[temp]==Mass[pos]){
            temp--;
            j++;}
        temp=pos+1;
        while (temp<size && Mass[temp]==Mass[pos]){
            temp++;
            j++;}
        return j;
    } else {return 0;}
}

int startSearch(int Mass[10], int size, int value)
{
    for (int i=0; i<size;i++){if (Mass[i]==value){
                swap(&Mass[i],&Mass[0]);
                return i;}}
    return -1;}

int indexSearch(int Mass[10], int size, int value)
{
    int indexTable[size/3], i;
    for (i=2; i<size; i+=3)
        {indexTable[i/3]=Mass[i];}
    for (i=0; i<size/3; i++){
        if(indexTable[i]>value){
            for(int j=i*3; j<(i+1)*3; j++)
            {if (Mass[j]==value){return j;}}
            return -1;}
        else if (indexTable[i]==value)
        {return i*3+2;}}
    for (i=(i+1)*3; i<size; i++)
    {if (indexTable[i]==value){return i;}}
    return -1;
}

void generate(int Mass[10], int size)
{
    for (int i=0; i<size; i++)
        {
            Mass[i]=rand()%25-10;

        }
}

void swap(int *i, int *j)
{int tmp;
     tmp=*i;
    *i=*j;
    *j=tmp;
}

int main()
{ int size=10, Mass[10], value, num[10], number;
    setlocale(LC_ALL, "");
    generate(Mass, size);
    bubbleSort(Mass, size);
    out(Mass, size);
    printf("Введите номер задания: ");
        scanf("%d", &number);

        switch (number){
            case 1:
                printf("Значение элемента:");
                scanf("%d", &value);
                printf("simpleSearch\n");
                number=simpleSearch(Mass, num, size, value);
                out(num, number);
                break;
            case 2:
                printf("Значение элемента:");
                scanf("%d", &value);
                printf("binarySearch\n");
                printf("Индекс элемента:%d\n", number=binarySearch(Mass, 0, size-1, value));
                break;
            case 3:
                printf("Значение элемента:");
                scanf("%d", &value);
                printf("transposSearch\n");
                printf("Индекс элемента:%d\n", number=transposSearch(Mass, size, value));
                break;
            case 4:
                printf("Значение элемента:");
                scanf("%d", &value);
                printf("startSearch\n");
                printf("Индекс элемента:%d\n", number=startSearch(Mass, size, value));
                break;
            case 5:
                printf("Значение элемента:");
                scanf("%d", &value);
                printf("indexSearch\n");
                printf("Индекс элемента:%d\n", number=indexSearch(Mass, size, value));
                break;

        }
    return 0;
}

