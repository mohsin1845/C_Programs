// 21 Write a program in C to check if a number is a power of 2 using bitwise
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if((num & (num-1))==0 && num >1)
    {
        printf("%d is power of 2\n");
    }
    else
    {
        printf("%d is not power of 2\n");
    }
    return 0;
}
