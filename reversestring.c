// this is reverse string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int i;
   char str[50],rev[50];
   printf("Enter the string : ");
   gets(str);
for ( i=0;str[i]!='\0';i++);
//printf("%d",i);
i--;
int j=0;
while (i>=0)
{

rev[j]=str[i];
j++;
i--;
}

printf("%s",rev);
}
