//program to display summation of n number


#include<stdio.h>

int Summation(int iNo)
{
   int iCnt=0;
   if(iNo<0)
   {
      iNo=-iNo;
      
   }
   int iSum=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      iSum=iSum+iCnt;
   }
   return iSum;
}

int main()
{
   int iValue=0;
   int iRet=0; 
   
   printf("Enter any number\n");
   scanf("%d",&iValue);


   iRet=Summation(iValue);
   printf("Addition is: %d\n",iRet);


   return 0;
}