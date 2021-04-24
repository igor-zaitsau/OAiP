#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <assert.h>
#include <string.h>

int main()
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
return 0;
}

