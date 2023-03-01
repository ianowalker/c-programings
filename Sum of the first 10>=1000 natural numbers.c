// Sum of the first 10>=1000 natural numbers 
#include<stdio.h>
int main()
{
    int a,num=1000,sum=0;
    printf("\nThe first 10>=1000 numbers are:");
    for(a=num;a>=10;a--)
    {
        sum=sum+a;
        printf("%d ",a);
    }
    printf("\nSum is :%d",sum);
    
    return 0;
}
