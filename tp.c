#include <stdio.h>

int Max(int iPatties,int iBuns)
{
	int iBurger=0;
	if(iPatties>iBuns)
	{
	    iBurger=iBuns;
	}
	else if(iPatties<iBuns)
	{
	    iBurger=iPatties;
	}
	else if(iPatties==iBuns)
	{
	    iBurger=iPatties;
	}
    return iBurger;
}


int main() 
{
	int a=0;
	int b=0;

    scanf("%d",&a);
    scanf("%d",&b);

	int iRet=0;
    iRet=Max(a,b);
    printf("%d\n",iRet);
	
	return 0;
}

