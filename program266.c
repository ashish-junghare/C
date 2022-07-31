#include<stdio.h>

void Display(char str[])
{
   /*while(*str!='\0')
   {
      printf("%c\t",*str);
      str++;
   }*/

   if(*str!='\0')
   {
      
      printf("%s\n",str);

      Display(str+1);
      
   }
}

int main()
{
   int Arr[20];
   printf("Enter a string\n");
   scanf("%[^'\n']s",&Arr);

   Display(Arr);

   return 0;
}