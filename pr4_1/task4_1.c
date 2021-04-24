#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
float x = 15, y = 60;
int c = 25;
setlocale(LC_ALL,"");
printf("15/60*100%%=\n");
printf("%13d%%\n",c );
printf("\"H\"\\");

return 0;
}
