#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	int i=0;
	for(i=1;i<iNo;i++)
	{
		if((iNo%i)==0 && (i%2)==0)
		{
			printf("%d\t",i);
		}
	}


}

int main()
{
	int iValue=0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);

	DisplayEvenFactor(iValue);

	return 0;
}