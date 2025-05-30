/* Write a program to swap the nibbles
input: 0xAB;
Output: 0xBA;
*/
#include <stdio.h>
#define SWAP(x) (((x << 4) & 0xf0) | ((x >> 4) & 0x0f))
int main() 
{
    int num=0xAB;
    num=SWAP(num);
    printf("%hX\n",num);
    return 0;
}
