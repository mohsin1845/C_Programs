/* Write a program to swap 2 bytes
input: 0xABCDEF12;
Output: 0xEF12ABCD;
*/
#include <stdio.h>
#define SWAP(x) (((x << 16) & 0xffff0000) | ((x >> 16) & 0x000ffff))
int main() 
{
    int num=0xABCDEF12;
    num=SWAP(num);
    printf("%X\n",num);
    return 0;
}
