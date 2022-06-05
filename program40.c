// Count number of factors
#include<stdio.h>
#include<stdbool.h>
int ChkPrime(int iNo)
{
   register int iCnt=0;
   int iFactCnt=0;
   for(iCnt=1;(iCnt<=iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         iFactCnt++;
      }
   }
   return iFactCnt;
}



int main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   iRet=ChkPrime(iValue);
   printf("%d have %d factors \n",iValue,iRet);

   return 0;
}


//Time Complexity : O(N)