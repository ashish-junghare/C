// check whether its perfect number or not
#include<stdio.h>
#include<stdbool.h>
int ChkSum(int iNo)
{
   register int iCnt=0;
   auto int iSum=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
         iSum+=iCnt;
      }
   }
   return iSum;
}
bool ChkPerfect(int iNo1)
{
   int iRet1=0;
   iRet1=ChkSum(iNo1);
   if (iRet1==iNo1)
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
   int iValue=0;
   bool bRet=false;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   bRet=ChkPerfect(iValue);

   if(bRet==true)
   {
      printf("%d is perfect number\n",iValue);
   }
   else
   {
      printf("%d is not perfect number\n",iValue);
   }

   return 0;
}


//Time Complexity : O(N/2)