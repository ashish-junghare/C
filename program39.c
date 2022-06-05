// check whether its perfect number or not
#include<stdio.h>
#include<stdbool.h>
int CountFactor(int iNo)
{
   register int iCnt=0;
   register int iFactCnt=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }
   for(iCnt=2;(iCnt<=iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         iFactCnt++;
      }
   }
   return iFactCnt;
   
}

bool ChkPrime(int iNo1)
{
   int iRet=false;
   iRet=CountFactor(iNo1);
   
   if(iRet==0)
   {
      return true;
   }
   else
   {
      return false;
   }

}

int main()
{
   auto int iValue=0;
   auto bool bRet=false;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   bRet=ChkPrime(iValue);

   if(bRet==true)
   {
      printf("%d is prime number\n",iValue);
   }
   else
   {
      printf("%d is not prime number\n",iValue);
   }

   return 0;
}


//Time Complexity : O(N/2)