// reverse the words
#include <stdio.h>
#include <stdlib.h>
void  rev(char );
int main(){
     char words[50];
     char ch;
     printf("Enter string : ");
     ch=getchar();
     rev(ch);


}
void rev (char  ch)
{
    char str[50];
    int i=0;

    while (ch!='\n')
    {
      //  putchar(ch);
        str[i]=ch;
        ch=getchar();
        i++;
        if (ch==' ')
         {
          rev(ch);
          break;
         }

     }

   str[i]='\0';
   printf("%s ",str);

}
