#include<stdio.h>

void DsiplayI(int no)
{
   while(no!=0)
   {
      printf("%d\t",no%10);  
      no=no/10;
   }
}

void DisplayR(int no)
{
   if(no!=0)
   { 
      no=no/10;
      DisplayR(no);
      
      printf("%d\t",no%10); 
   }
}

int main()
{
   
   //DsiplayI(123   );
   DisplayR(123);
   return 0;
}