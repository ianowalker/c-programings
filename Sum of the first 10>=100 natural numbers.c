// Sum of the first 10>=100 natural numbers 
#include<stdio.h>
int main()
{
    int a,num=100,sum=0;
    printf("\nThe first 10>=100 numbers are:");
    for(a=num;a>=10;a--)
    {
        sum=sum+a;
        printf("%d ",a);
    }
    printf("\nSum is :%d",sum);
    
    return 0;
}
