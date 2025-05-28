
//Write a program in C to find the Factorial of a number using recursion.
#include <stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
     return n * fact(n-1);
}
int main() {
    // Write C code here
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    int res=fact(num);
    printf("The Factorial of a number is: %d\n",res);
    return 0;
}
