// C program to find factorial of a number using recursion...

#include<stdio.h>
int factorial(int num){
    if (num == 0 || num == 1 )
        return 1;
    return num * factorial(num-1);
}
int main(){
    int num;
    printf("Enter a number to find its factorial:");
    scanf("%d",&num);
    if(num<0)
        printf("Factorial of negative number is not defined");
    else
        printf("The factorial of %d is %d.",num,factorial(num));
    return 0;
}