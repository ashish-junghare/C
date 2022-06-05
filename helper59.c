#include"header59.h"

ULONG Power(int iNo,int iPower)
{
   ULONG iMult=1;
   register int i=0;
   for(i=1;i<=iPower;i++)
   {
      iMult=iMult*iNo;
   }
   return iMult;
}

