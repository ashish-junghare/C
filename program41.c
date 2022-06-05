// Check if prime(Optimized)
#include<stdio.h>
#include<stdbool.h>
bool ChkPrime(int iNo)
{
   register int iCnt=0;
   bool bFlag=true;
   for(iCnt=2;(iCnt<=iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         bFlag=false;
         break;
      }
   }
   return bFlag;
}



int main()
{
   int iValue=0;
   bool bRet=true;

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