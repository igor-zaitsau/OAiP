#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{int h, m, s;
setlocale(LC_ALL,"");
   printf ("¬ведите дату:\n");
   scanf ("%2d%*c%2d%*c%2d",&h, &m, &s);
   printf ("%d ч %d мин %d сек",h, m, s);

    return 0;
}
