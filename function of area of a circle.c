//Function of product of two numbers
#include<stdio.h>
int product(int a,int b);
int main()
{
    int result;
    result= 4*5;
    
    printf("\nThe product of two numbers is: %d", result);
    return 0;
}

int product(int a,int b)
{
   int answer;
   answer = a*b;
   
    return answer;
}
