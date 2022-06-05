//To diplay digits
#include<stdio.h>

void DisplayDigits(int iNo)
{
   int iDigit=0;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      printf("%d\n",iDigit);
      iNo=iNo/10;
   }

}


int main()
{
   int iValue=0;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   DisplayDigits(iValue);

   return 0;
}

/*
Time complexity : O(N)
where N is number of digits in number
*/