#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <assert.h>
#include <string.h>


int main()
{
int k=0;
char string[1024];
gets(string); /* Hello World now 2020 god I eto karaKatitsa*/
for(int i=0; i<strlen(string); i++){
    if(65<string[i] && string[i]<91){
        if(string[i]!=69 && string[i]!=73 && string[i]!=79 && string[i]!=85 && string[i]!=89){k++;}
    }
}
printf("%d", k);
    return 0;
}
