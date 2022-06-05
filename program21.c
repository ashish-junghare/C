//program to display 5 times Hello on screen

#include<stdio.h>

void Display(iNo)
{
   int iCnt=1;
   if(iNo<0)
   {
      iNo=-iNo;
   }
   while(iCnt<=iNo)
   {
      printf("%d\n",iCnt);
      iCnt++;
   }
}

int main()
{
   int iValue=0;
   
   printf("Enter any number\n");
   scanf("%d",&iValue);


   Display(iValue);


   return 0;
}