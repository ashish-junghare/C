//To sum of even digits

#include<stdio.h>
int SumEvenDigits(int iNo)
{
   auto int iDigit=0;
   auto int iSum=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }
   

   while(iNo>0)
   {
      iDigit=iNo%10;
      if(iDigit%2==0)
      {
         iSum+=iDigit;
      }
      iNo=iNo/10;
   }
   return iSum;

}


int main()
{
   auto int iValue=0;
   auto int iRet=0;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   iRet=SumEvenDigits(iValue);
   printf("Addition of even number of digits is %d\n",iRet);

   return 0;
}

/*
Time complexity : O(N)
where N is number of digits in number
*/