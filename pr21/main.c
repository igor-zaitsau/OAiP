#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#define e 2,71828
#define N 2

void task_1()
{ int arr[N];
FILE *fp;
fp=fopen("file.txt", "w");
fputc('a', fp);
fclose(fp);

fp=fopen("file.txt", "r");
while (fgets (arr, N, fp) != NULL)
		printf("%s", arr);
		printf("\n");
fclose(fp);
}

void task_2()
{
int i,n, arr[N];
  char a[20];
  int b[] = {1, 2, 5};
  FILE *file1;
  scanf("%s", a);
  file1 = fopen("file.txt", "w");
  fprintf(file1, "%s", a);
  for(i=0; i<3; i++)
  fprintf(file1, " %d", b[i]);
  fclose(file1);
  file1=fopen("file.txt", "r");
while (fgets (arr, N, file1) != NULL)
		printf("%s", arr);
		printf("\n");
fclose(file1);
}


void task_3()
{ char arr[N];
    FILE *file1;
    file1=fopen("task_3.txt", "r");
while (fgets (arr, N, file1) != NULL)
		printf("%s", arr);
		printf("\n");
fclose(file1);

}


void task_4()
{ int  x, a, b;
float r5, u;
    FILE *inFile;
    FILE *outFile;
    inFile=fopen("input4.txt", "r");
    fscanf(inFile, "%d", &x);
    fscanf(inFile, "%d", &a);
    fscanf(inFile, "%d", &b);
    fclose(inFile);
    printf("Данные из файла: %d %d %d\n", x,a,b);
r5=((x*x)/exp(a))+ 1/3.*sin(x)*sin(x)-log(x);
u=(1+x*x)*x+ (exp(x)/(2*x*x+5))- (a/(b*cos(x)*cos(x)*cos(x)));
printf("Ответы: r5=%f, u=%f", r5, u);
    outFile=fopen("output4.txt", "w");

    fprintf(outFile, "%f\n", r5);
    fprintf(outFile, "%f", u);
    fclose(outFile);
    printf("\n");
}


void task_5()
{   FILE *inFile;
    FILE *outFile;
    inFile=fopen("input5.txt", "r");
int k1, k2, i=0;
float z,x ;
    fscanf(inFile, "%d", &k1);
    fscanf(inFile, "%d", &k2);
    printf("Входные данные: %d %d\n", k1, k2);
    outFile=fopen("output5.txt", "w");
    printf("x\t\tz(x)\n");
    fclose(inFile);
    fprintf(outFile, "x\t\tz(x)\n");

    for(x=1.5; x<=6.3; x+=0.3){
    i++;
    if(i==6)
    {
        printf("%.3f\t\t--\n", x);
        fprintf(outFile, "%.3f\t\t--\n", x);
        continue;
    }
        z=k1*1./exp(x) -  pow(log2(x*1.),3) - k2*1./(x-3);
        printf("%.3f\t\t%.3f\n", x, z);
    fprintf(outFile, "%.3f\t\t%.3f\n", x ,z);}
    fclose(outFile);
    }

void task_6()
{   FILE *inFile;
    FILE *outFile;
inFile=fopen("input6.txt", "r");
    int U[10], min=0, zam=0;
  int i, D[10], n,x=1,z=0;

fscanf (inFile, "%d", &n);

  for (i=0; i<10; i++)
  {
    fscanf(inFile, "%d", &U[i]);
    }
fclose(inFile);
outFile=fopen("output6.txt", "w");
  for (i=0; i<10; i++)
  {D[i]=(1/tan(U[i]))/(n+1)-log(abs(n*U[i]));}
  for (i=0; i<10; i++)
  {
      fprintf(outFile,"D[%d]=%d\n",i, D[i]);
  } for (i=0; i<10; i++) {
    if (D[i]<0)
  {
      x*=D[i];
  }

  } fprintf (outFile, "Произведение отрицательных элементов массива: %d\n\n",x);
  for (i=0; i<10; i++){
    if (min>=D[i]) {min=D[i]; z=i;}
  }
  zam=D[z];
  D[z]=D[9];
  D[9]=zam;
  fprintf(outFile, "Замена минимального и последнего элемента массива:\n");
for (i=0; i<10; i++)
  {
      fprintf(outFile,"D[%d]=%d\n",i, D[i]);
  }
    fclose(outFile);
}

void task_7_1()
{FILE *fp;
int i;
char string[1024], *mass_char;
mass_char=string;
fp=fopen("input7_1.txt", "r");
fgets(string, 80, fp);
fclose(fp);
printf("%s", string);
for(i=0; i<strlen(string); i++ ){
if(*mass_char == 107){*mass_char = 116;}
else if(*mass_char == 75){*mass_char = 84;}
if(*mass_char>=65 && *mass_char<=90){
*mass_char+=32;
fprintf(stdout, "%c", *mass_char);}
else if(*mass_char==32){
fprintf(stdout, "%c", *mass_char);
mass_char++;
*mass_char=tolower(*mass_char);
if(*mass_char == 107){*mass_char = 116;}
fprintf(stdout, "%c", *mass_char);
i++;}
else if(*mass_char>=97 && *mass_char<=122){
*mass_char-=32;
fprintf(stdout, "%c", *mass_char);}
else {fprintf(stdout, "%c", *mass_char);}
mass_char++;}
fp=fopen("output7_1.txt", "w");
fprintf(fp, "%s", string);
fclose(fp);
}


void task_7_2()
{FILE *fp;
char string[1024];
char *mass_char, ch;
mass_char=string;
fp=fopen("input7_2.txt","r");
fgets(string, "%s", fp);
fclose(fp);
printf("\n\n%s\n", string);
for(int i=2; i<7; i+=3 )
    {
        if (96<string[i] && string[i]<123 || 159<string[i] && string[i]<176)
        {
            string[i]-=32;
        }
    else if (223<string[i] && string[i]<240)
    {
        string[i]-=80;
    }
    }
for(int i=11; i<strlen(string); i+=3 )
    {
        if (96<string[i] && string[i]<123 || 159<string[i] && string[i]<176)
        {
            string[i]-=32;
        }
    else if (223<string[i] && string[i]<240)
    {
        string[i]-=80;
    }
    }
for(int i=0; i<strlen(string); i++ )
    {
        printf("%c", string[i]);
    }
    fp=fopen("output7_2.txt","w");
fprintf(fp, "%s", string);
fclose(fp);
}





int main()
{setlocale(LC_ALL,"");
    int number;

printf("Введите номер задания: ");
scanf("%d", &number);
switch(number)
{
case 0: break;
case 1: task_1(); break;
case 2: task_2(); break;
case 3: task_3(); break;
case 4: task_4(); break;
case 5: task_5(); break;
case 6: task_6(); break;
case 7: task_7_1();
        task_7_2();
                  break;

}
    return 0;
}
