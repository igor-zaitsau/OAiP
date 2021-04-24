#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main()
{unsigned int a,b,c,d;
setlocale(LC_ALL,"");
printf("Введите a:");
scanf("%x", &a);
printf("%x\n", b=a|0x40890D10);
printf("Маска в 8с/с=%o,\nМаска в 10с/c=%d,\nМаска в 16с/с=%x\n",010042206420, 1082723600, 0x40890D10);
printf("%x\n",c=a&0x2F7FDCCE);
printf("Маска в 8с/с=%o,\nМаска в 10с/c=%d,\nМаска в 16с/с=%x\n",05737756316, 796908750, 0x2F7FDCCE);
printf("%x\n",d=a^0x200029A5);
printf("Маска в 8с/с=%o,\nМаска в 10с/c=%d,\nМаска в 16с/с=%x\n",04000024645, 536881573, 0x200029A5);




return 0;
}
