//Check Armstrong number

#include<stdio.h>
#include<stdbool.h>


bool ChkArmstrong(int iNo)
{
   int iCopy=iNo;
   int iCnt=0;
   int i=0;
   int i1=0;
   int i2=0;
   int iDigit=0;
   int iSum=0;
   for(i=0;i<iNo;i++)
   {
      iCnt++;
      iNo=iNo/10;
   }

   int iMult=1;
   while(iCopy!=0)   
   {
      iMult=1;
      iDigit=iCopy%10;
      for(i1=0;i1<=iCnt;i1++)
      {
         iMult=iMult*iDigit;
      }
      iCopy=iCopy/10;
      iSum=iSum+iMult;
   }
   printf("%d\n",iSum);

   if(iSum==iNo)
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
   auto int iPower=0;
   auto int bRet=false;

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
