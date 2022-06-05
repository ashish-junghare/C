//To count digits

#include<stdio.h>
int SumDigits(int iNo)
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
      iSum+=iDigit;
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

   iRet=SumDigits(iValue);
   printf("Addition of Number of digits are %d\n",iRet);

   return 0;
}

/*
Time complexity : O(N)
where N is number of digits in number
*/