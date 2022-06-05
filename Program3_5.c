#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cValue)
{
    char a,e,i,o,u='/0';
    
    if(cValue==a||cValue==e||cValue==i||cValue==o||cValue==u)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    char cValue='/0';
    BOOL bRet=FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==1)
    {
        printf("This is vowel\n");
    }
    else
    {
        printf("This is not vowel\n");
    }
    return 0;
}