//Power  of any number
#include<stdio.h>
#include<stdbool.h>
typedef unsigned long int ULONG;
ULONG Power(int iNo,int iPower)
{
   ULONG iMult=1;
   register int i=0;
   for(i=1;i<=iPower;i++)
   {
      iMult=iMult*iNo;
   }
   return iMult;
}


int main()
{
   auto int iValue=0;
   auto int iPower=0;
   auto ULONG lRet=0;

   printf("Enter any number: ");
   scanf("%d",&iValue);

   printf("Enter power number: ");
   scanf("%d",&iPower);

   lRet=Power(iValue,iPower);
   printf("Result is %ld\n",lRet);
   
   return 0;
}

//Time complexity : N
//where N is number of iteration of no2 times