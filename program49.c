//To count digits

#include<stdio.h>
int CountDigits(int iNo)
{
   register int iCnt=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }
   

   while(iNo>0)
   {
      iCnt++;
      iNo=iNo/10;
   }
   return iCnt;

}


int main()
{
   auto int iValue=0;
   auto int iRet=0;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   iRet=CountDigits(iValue);
   printf("Number of digits are %d\n",iRet);

   return 0;
}

/*
Time complexity : O(N)
where N is number of digits in number
*/