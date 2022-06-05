//Check Armstrong number

#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo)
{
   int iTemp=0;
   int i=0;
   iTemp=iNo;
   int iDigit=0;
   int iCnt=0;
   int iSum=0;
   int iMult=1;

   if(iNo<0)
   {
      iNo=-iNo;
   }

   while(iNo!=0)
   {
      iCnt++;
      iNo=iNo/10;
   }
   iNo=iTemp;
   while(iNo!=0)
   {
      iMult=1;
      iDigit=iNo%10;
      for(i=1;i<=iCnt;i++)
      {
         iMult=iMult*iDigit;
      }
      iSum=iSum+iMult;
      iNo=iNo/10;
   }

   if(iSum==iTemp)
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
   auto int iValue=0;
   bool bRet=false;

   printf("Enter any number: ");
   scanf("%d",&iValue);

   bRet=ChkArmstrong(iValue);
   if(bRet==true)
   {
      printf("%d is armstrong number\n",iValue);
   }
   else 
   {
      printf("%d is not armstrong number\n",iValue);
   }
   return 0;

}
