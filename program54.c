//Pallindrome

#include<stdio.h>
#include<stdbool.h>
bool CheckPal(int iNo)
{
   int iDigit=0;
   int iRev=0;
   int iCopy=0;

      if(iNo<0)
   {
      iNo=-iNo;
   }
   iCopy=iNo;

   while(iNo>0)
   {
      iDigit=iNo%10;
      iRev=iRev*10+iDigit;
      iNo=iNo/10;
   }
   if (iRev==iCopy)
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
   auto bool bRet=false;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   bRet=CheckPal(iValue);
   if(bRet==true)
   {
      printf("%d is pallindrome number\n",iValue);
   }
   else
   {
      printf("%d is not pallindrome number\n",iValue);
   }
   


   return 0;
}