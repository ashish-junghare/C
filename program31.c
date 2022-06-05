//Accept number form user and display its non-factors
#include<stdio.h>

void DisplayNonFactors(int iNo)
{
   register int iCnt=0;

   if(iNo<0)
   {
      iNo=-iNo;
   }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      if((iNo%iCnt)!=0)
      {
         printf("%d\t",iCnt);
      }
   }

}



int main()
{
   int iValue=0;
   printf("Enter any number: \n");
   scanf("%d",&iValue);

   DisplayNonFactors(iValue);

   return 0;
}

//Time Complexity : O(N)