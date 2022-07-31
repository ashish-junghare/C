#include<stdio.h>

void Display(int iNo)
{
   int i=0;
   char ch='\0';
   for(i=1,ch='a';i<=iNo;i++,ch++)
   {
      printf("%c\t",ch);
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