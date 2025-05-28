//Write a program in C to swap two numbers without using third variable using bitwise
#include <stdio.h>
int main() {
    // Write C code here
    int num1,num2;
    printf("Enter the Number1 and Number2: ");
    scanf("%d %d",&num1,&num2);
    printf("Before Swap:\nNumber1: %d and Number2: %d\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("After Swap:\nNumber1: %d and Number2: %d",num1,num2);
    return 0;
}
