// Check Endianess of System
#include<stdio.h>
int main()
{
    int num=0xABCDEF12;
    char *ptr=(char *)&num;
    *ptr==0x12 ? printf("System is Little Endian\n") : printf("System is Big Endian\n");
    return 0;
}
