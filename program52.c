//To display even digits

#include<stdio.h>
int DisplayDigits(int iNo)
{
   auto int iDigit=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }
   

   while(iNo>0)
   {
      iDigit=iNo%10;
      if(iDigit%2==0)
      {
         printf("%d\n",iDigit);
      }
      iNo=iNo/10;
   }

}


int main()
{
   auto int iValue=0;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   DisplayDigits(iValue);
   return 0;
}

/*
Time complexity : O(N)
where N is number of digits in number
*/