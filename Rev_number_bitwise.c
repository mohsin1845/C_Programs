/* Write a program to reverse number
input: 0x12345678
Output: 0x87654321;
*/
#include <stdio.h>
#define REV(x) (((x >> 24) & 0x000000ff) | \
                 ((x >> 8) & 0x0000ff00) | \
                 ((x << 8) & 0x00ff0000) | \
                 ((x << 24) & 0xff000000))
#define SWAP(x) (((x << 4) & 0xf0) | ((x >> 4) & 0x0f))
int main() 
{
    int num=0x12345678;
    
    num=REV(num);
    char *ptr=(char *)&num;
    for(int i=0;i<sizeof(num);i++)
    {
        ptr[i]=SWAP(ptr[i]);
    }
    printf("The Reversed number is: 0X%X\n",num);
    return 0;
}
