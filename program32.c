//Accept number form user and display its factors addition
#include<stdio.h>

int FactorsAdd(int iNo)
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



int main()
{
   int iValue=0;
   int iRet=0;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   iRet=FactorsAdd(iValue);
   printf("Addition of factors is: %d\n",iRet);


   return 0;
}

//Time Complexity : O(N/2)