/* Write a program to INTERCHANGE nibles
input: 0xABCDEF12;
Output: 0xBADCFE21;
*/
#include <stdio.h>
#define SWAP(x) (((x << 4) & 0xf0) | ((x >> 4) & 0x0f))
int main() 
{
    int num=0xABCDEF12;
    char *ptr=(char *)&num;
    for(int i=0;i<sizeof(num);i++)
    {
        ptr[i]=SWAP(ptr[i]);
    }
    printf("%X\n",num);
    return 0;
}
