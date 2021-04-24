#include <iostream>
#include <locale.h>
#include <fstream>
#include <math.h>
#include <cstring>
#include <cstdlib>
#include <cmath> // для round
#define N 6

using namespace std;
char toUpperCase (char ch);

task1()
{
    float Mass[N];
int i;
cout <<"Введите элементы массива(6)"<<endl;
for(i=0; i<N; i++)
{
    cin >> Mass[i];
}
    ofstream fp("tdata.txt");
//    if(fp==NULL)
//    {
//        cout << "Ошибка при открытии файла" << endl;
//        return -1;
//    }

    for(i=0; i<N; i++)
    {
    fp << Mass[i] << " ";
    }
    fp.close();
    cout <<endl;
}

task2()
{
float Mass[N];
int i;

std::ifstream fp("tdata.txt", ios::binary);

//    if(fp == NULL)
//    {
//        cout << "Ошибка при открытии файла" << endl;
//        return -1;
//    }
    for(i=0; i<N; i++)
    {
     fp >> Mass[i];
    }
    fp.close();
    for(i=0; i<N; i++)
    {
        cout << round(Mass[i]*10000)/10000 << " "; //Округление до 4 знаком после запятой
    }
cout <<endl;
}

task3()
{
float Mass[31];
int i, max=-4, min=-23;

for(i=0; i<31; i++)
{
    Mass[i] = (float) rand()/RAND_MAX*(max-min)+min;
    if(Mass[i]>-4){Mass[i]-=5;}
    cout << Mass[i] <<" ";
}
ofstream fp("bdata.txt", ios::binary);
//    if(fp == NULL)
//    {
//        cout << "Ошибка при открытии файла" << endl;
//        return -1;
//    }
     for(i=0; i<31; i++)
    {
    fp << Mass[i] << " ";
    }
    fp.close();
cout << endl;
}

task4()
{
float Mass[31], max, min;
int i;

ifstream fp("bdata.txt", ios::binary);

//    if(fp == NULL)
//    {
//        cout << "Ошибка при открытии файла" << endl;
//        return -1;
//    }
    for(i=0; i<31; i++)
    {
     fp >> Mass[i];
    }
    fp.close();
    max=Mass[0];
    min=Mass[0];
    for(i=0;i<N; i++)
    {
        if(Mass[i]>max)
        {
            max=Mass[i];
        }
        if(Mass[i]<min)
        {
            min=Mass[i];
        }
    }
    for(i=0; i<31; i++)
    {
        cout << Mass[i] <<" ";
    }
    cout << endl << "Максимальное число:" << max << endl << "Минимальное число:" << min <<endl;

}

task5()
{
int U[10], mini, index;
int i, D[10], n, x=1, last, z;
cout << "Введите число n(любое):";
cin >> n;
  for (i=0; i<10; i++)
  {
    cout <<"U["<<i<<"] = ";
    cin >> U[i];
    }
  for (i=0; i<10; i++)
  {D[i]=(1/tan(U[i]))/(n+1)-log(abs(n*U[i]));}
  cout << endl;
 mini=D[0];
  for (i=0; i<10; i++)
  {
      cout <<"D["<<i<<"]="<<D[i]<<endl;

  } for (i=0; i<10; i++) {
    if (D[i]<0)
  {
      x*=D[i];
  }
   if (D[i]<mini)
   {
       mini=D[i];
       index=i;
       z=D[index];
       D[index]=D[9];
       D[9]=z;
   }

  }
  cout <<"Произведение элементом массива D<0: "<<x<<endl;

cout <<"После замены минимального и последнего:"<<endl;
for (i=0; i<10; i++)
  {
      cout <<"D["<<i<<"]="<<D[i]<<endl;

  }
}

task6()
{
char string[1024];
char *mass_char;
mass_char=string;
gets(string); /*Hello World now 2020 god I eto karakatitsa*/
for(int i=0; i<strlen(string); i++ ){
if(*mass_char == 107){*mass_char = 116;}
else if(*mass_char == 75){*mass_char = 84;}
if(*mass_char>=65 && *mass_char<=90){
*mass_char+=32;
cout << *mass_char;}
else if(*mass_char==32){
cout << *mass_char;
mass_char++;
*mass_char=tolower(*mass_char);
if(*mass_char == 107){*mass_char = 116;}
cout << *mass_char;
i++;}
else if(*mass_char>=97 && *mass_char<=122){
*mass_char-=32;
cout << *mass_char;}
else {cout << *mass_char;}
mass_char++;}
}

task7()
{
   char string[1024];
char *mass_char;
mass_char=string;
gets(string); /*hello world now 2020 god i eto karakatitsa*/
for(int i=2; i<7; i+=3 ){string[i]=toUpperCase(string[i]);}
for(int i=11; i<strlen(string); i+=3 ){string[i]=toUpperCase(string[i]);}
for(int i=0; i<strlen(string); i++ ){cout << string[i];}

}


char toUpperCase (char ch){
    if (96<ch && ch<123 || 159<ch && ch<176){return ch-32;}
    else if (223<ch && ch<240){return ch-80;}
    return ch;
}




int main()
{setlocale(LC_ALL,"");
int x;
while(x!=0)
{
cout <<"Введите номер задания:"<<" ";
cin >>x;
switch(x)
{
case 1: task1(); break;
case 2: task2(); break;
case 3: task3(); break;
case 4: task4(); break;
case 5: task5(); break;
case 6: task6(); break;
case 7: task7(); break;
default: break;
}
}
    return 0;
}
