#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{int h, m, s;
setlocale(LC_ALL,"");
   printf ("������� ����:\n");
   scanf ("%2d%*c%2d%*c%2d",&h, &m, &s);
   printf ("%d � %d ��� %d ���",h, m, s);

    return 0;
}
