#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <assert.h>
#include <string.h>

char toUpperCase (char ch);

int main()
{
char string[1024];
char *mass_char;
mass_char=string;
gets(string); /*hello world now 2020 god i eto karakatitsa*/
for(int i=2; i<7; i+=3 ){string[i]=toUpperCase(string[i]);}
for(int i=11; i<strlen(string); i+=3 ){string[i]=toUpperCase(string[i]);}
for(int i=0; i<strlen(string); i++ ){printf("%c", string[i]);}
return 0;
}


char toUpperCase (char ch){
    if (96<ch && ch<123 || 159<ch && ch<176){return ch-32;}
    else if (223<ch && ch<240){return ch-80;}
    return ch;
}
