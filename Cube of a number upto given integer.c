//Cube of a number upto a given integer 
#include<stdio.h>
void main()
{
    int a,ctr;
    printf("\nInput number of terms:");
    scanf("%d",&ctr);
    
    for(a=1;a<=ctr;a++)
    {
        printf("\nNumber is: %d :and cube of %d is : %d",a,a,(a*a*a));
    }
    
    return 0;
}
   
