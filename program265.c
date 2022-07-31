#include<stdio.h>

void Display(int iNo)
{
   static int i=0;
   static char ch='a';
   /*for(i=1,ch='a';i<=iNo;i++,ch++)
   {
      printf("%c\t",ch);
   }*/

   /*while(i<iNo)
   {
      printf("%c\t",ch);
      ch++;
      i++;
   }*/

   if(i<iNo)
   {
      i++;
      Display(iNo);
      printf("%c\t",ch);
      ch++;
   }
}

int main()
{
   int iValue=0,iRet=0;
   printf("Enter a number\n");
   scanf("%d",&iValue);

   Display(iValue);

   return 0;
}