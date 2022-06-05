//program to display 5 times Hello on screen

#include<stdio.h>

void Display(int iValue)
{
   int iCnt=0;

   if(iValue<0)
   {
      iValue=-iValue;
   }

   for(iCnt=0;iCnt<iValue;iCnt++)
   {
      printf("Hello\n");
   }
}

int main()
{
   int iNo=0;
   printf("How many times you want to display Hello ?\n");
   scanf("%d",&iNo);

   Display(iNo);


   return 0;
}