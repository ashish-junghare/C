#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd=0,ret=0;
    char Data[11];
    printf("Enter file name to open: \n");
    scanf("%s",fname);

    fd=open(fname,O_RDWR);
    if (fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("file is opened \n");
    }
    read(fd,Data,6);
    //printf("Data from file is: %6s\n",Data);
    write(1,Data,6);
    close(fd);

    return 0;
}