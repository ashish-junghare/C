#include<stdio.h>

int sum(int Arr[],int iSize)
{
   static int iSum=0;

   if(0<iSize)
   {
      iSum=iSum+Arr[iSize-1];
      iSize--;
      sum(Arr,iSize);
   }



   /*while(i<iSize)
   {
      iSum=iSum+Arr[i];
      i++;
   }*/
   return iSum;
}


int main()
{
   int Brr[]={10,20,30,40};
   int iRet=0;

   iRet=sum(Brr,4);

   printf("Summation is : %d\n",iRet);

   return 0;
}