#include"header59.h"

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