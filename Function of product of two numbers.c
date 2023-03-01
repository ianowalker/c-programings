//Function of product of two numbers.c
#include<stdio.h>
int product();
int main()
{
    int answer;
    answer= product();
    
    printf("\nThe product of two numbers is: %d",answer);
    return 0;
}

int product()
{
   int a = 5, b = 4;
    return a * b;
}
