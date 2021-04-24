#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <malloc.h>
#include <conio.h>



void display(int num[11]) // Вывод одномерного массива
{
int i;
for (i=0; i<10; i++) {
        num[i] = rand() % 201-100;
        printf("%d ", num[i]);
    }
}

void swap(int *x, int *y) // Замена чисел
{int c;
c=*x;
*x=*y;
*y=c;
printf("a=%d, b=%d", *x, *y);
}

void bubble(int *num, int size) // Сортировка пузырьком
{
  for (int i=0; i<10-1; i++)
  {
    for (int j=(size-1); j>i; j--)
    {
        if (num[j-1]>num[j])
        {
        int temp=num[j-1];
        num[j-1]=num[j];
        num[j]=temp;
      }
    }
  }
}


 void selectionSort(int *num, int size) // Сортировка выбором
{
  int min, temp;
  for (int i = 0; i < 10 - 1; i++)
  {
    min = i;

    for (int j = i + 1; j <10; j++)
    {
      if (num[j] < num[min])
        min = j;
    }
    temp = num[i];
    num[i] = num[min];
    num[min] = temp;
  }
}


void insertsort(int *num, int size) // Сортировка вставками
{
int i, j, x;
for (i=0; i<size; i++)
  {
  x = num[i];
   for (j=i-1; j>=0 && num[j]>x; j--) num[j+1] = num[j];
   num[j+1] = x;
  }
}

void quickSort(int *numbers, int left, int right) // Быстрая сортировка
{
int pivot;
int l_hold = left;
int r_hold = right;
pivot = numbers[left];
while (left < right)
{
while ((numbers[right] >= pivot) && (left < right))
right--;
if (left != right)
{
numbers[left] = numbers[right];
left++;
}
while ((numbers[left] <= pivot) && (left < right))
left++;
if (left != right)
{
numbers[right] = numbers[left];
right--;
}
}
numbers[left] = pivot;
pivot = left;
left = l_hold;
right = r_hold;
if (left < pivot)
quickSort(numbers, left, pivot - 1);
if (right > pivot)
quickSort(numbers, pivot + 1, right);
}





 void siftDown(int *numbers, int root, int bottom)  // Пирамидальная сортировка
{
  int maxChild;
  int done = 0;

  while ((root * 2 <= bottom) && (!done))
  {
    if (root * 2 == bottom)
      maxChild = root * 2;

    else if (numbers[root * 2] > numbers[root * 2 + 1])
      maxChild = root * 2;
    else
      maxChild = root * 2 + 1;

    if (numbers[root] < numbers[maxChild])
    {
      int temp = numbers[root];
      numbers[root] = numbers[maxChild];
      numbers[maxChild] = temp;
      root = maxChild;
    }
    else
      done = 1;
  }
}

void heapSort(int *numbers, int array_size) // Пирамидальная сортировка
{

  for (int i = (array_size / 2) - 1; i >= 0; i--)
    siftDown(numbers, i, array_size - 1);

  for (int i = array_size - 1; i >= 1; i--)
  {
    int temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
    siftDown(numbers, 0, i - 1);
  }
}




void shaker(int *num, int size) // Шейкер сортировка
{
int tmp = 0, high = 0, low = (10 - 1);
while (high < low)
{
    for (int i = high; i < low; i++)
     {
        if (num[i] > num[i + 1])
         {
            tmp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = tmp;
         }
     }
low--;

    for (int j = low; j > high; j--)
        {
          if (num[j] < num[j - 1])
            {

                tmp = num[j];
                num[j] = num[j - 1];
                num[j - 1] = tmp;

            }
        }
high++;
}
}



void shellSort(int *num, int size) // Сортировка Шелла
{
  int increment = 3;
  while (increment > 0)
  {
    for (int i=0; i<10; i++)
    {
      int j = i;
      int temp = num[i];


      while ((j >= increment) && (num[j - increment] > temp))
      {
        num[j] = num[j - increment];
        j = j - increment;
      }
      num[j] = temp;
    }
    if (increment > 1)
      increment = increment / 2;
    else if (increment == 1)
      break;
  }
}



 void mergeSort(int *num, int size) // Сортировка слиянием
{
  int step = 1;
  int *temp = (int*)malloc(size * sizeof(temp));
  while (step < size)
  {
    int index = 0;
    int l = 0;
    int m = l + step;
    int r = l + step * 2;
    do
    {
      m = m < size ? m : size;
      r = r < size ? r : size;
      int i1 = l, i2 = m;
      for (; i1 < m && i2 < r; )
      {
        if (num[i1] < num[i2]) { temp[index++] = num[i1++]; }
        else { temp[index++] = num[i2++]; }
      }

      while (i1 < m) temp[index++] = num[i1++];
      while (i2 < r) temp[index++] = num[i2++];
      l += step * 2;
      m += step * 2;
      r += step * 2;
    } while (l < size);
    for (int i = 0; i < size; i++)
      num[i] = temp[i];
    step *= 2;
  }
}


int main ()
{
int t[11], i, a, b, *x, *y, variant, N=0;
setlocale(LC_ALL,"");
x=&a;
y=&b;

for (i=0; i<10; ++i) {t[i]=i;} display(t);
printf("\nВведите номер задания: ");
scanf("%d", &variant);
switch(variant){
    case 0: break;
    case 3: printf("Функция сортировки пузырьком:\n");{
        bubble(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);}
        break;
    case 4: printf("Функция сортировки выбором:\n"); {
        selectionSort(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);}
        break;
    case 5: printf("Функция сортировки вставками:\n");{
        insertsort(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);}
        break;
    case 6: printf("Функция быстрой сортировки:\n");
        quickSort(t, 0, 10-1);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);
        break;
    case 7: printf("Функция пирамидальной сортировки:\n");
        heapSort(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);
        break;
    case 8: printf("Функция шейкер-сортировки:\n");
        shaker(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);
        break;
    case 9: printf("Функция сортировки Шелла:\n");
        shellSort(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);
        break;
    case 10: printf("Функция сортировки слиянием:\n");
        mergeSort(t, 10);
        for (int i = 0; i<10; i++)
        printf("%d ", t[i]);
        break;
    case 11: printf("Не найдено!\n"); break;
    case 12: printf("Не найдено!\n"); break;
    case 13: printf("Функция вывода одномерного массива:\n");
        display(t);
        break;
}


printf("\n");
printf("\na=");
scanf("%d", &a);
printf("b=");
scanf("%d", &b);
swap(&a, &b);

return 0;
}

