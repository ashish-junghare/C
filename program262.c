#include<stdio.h>

int Sum(int iNo)
{
   static int iSum=0;
   int iDigit=0;

   if(iNo!=0)
   {
      iDigit=iNo%10;
      iSum=iSum+iDigit;
      iNo=iNo/10;
      Sum(iNo);
   }



   /*while(iNo!=0)
   {
      iDigit=iNo%10;
      iSum=iSum+iDigit;
      iNo=iNo/10;
   }*/
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