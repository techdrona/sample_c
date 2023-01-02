#include<stdio.h>
//function to add two numbers num1 and num2
int add(int num1, int num2)
{
    return num1+num2;
}
//main function driver code
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of %d and %d is %d", num1, num2, add(num1, num2));
    return 0;
}






