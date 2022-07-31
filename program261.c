#include<stdio.h>

int Sum(int iNo)
{
   int iSum=0,iDigit=0;

   while(iNo!=0)
   {
      iDigit=iNo%10;
      iSum=iSum+iDigit;
      iNo=iNo/10;
   }
   return iSum;
}

int main()
{
   int iValue=0,iRet=0;
   printf("Enter a number\n");
   scanf("%d",&iValue);

   iRet=Sum(iValue);

   printf("Addition os number is: %d\n",iRet);

   return 0;
}