// Write a program to swap the nibbles
/*
  ABCD -> CDAB
*/
#include <stdio.h>
#define SWAP(x) (((x << 8) & 0xff00) | ((x >> 8) & 0x00ff))
int main() 
{
    int num=0xABCD;
    num=SWAP(num);
    printf("%X\n",num);
    return 0;
}
