//fuction of a volume of a sphere
#include<stdio.h>
#define pi 3.142
int volume(int r);
int main()
{
    int r,result;
    printf("\nEnter the radius:");
    scanf("%d",&r);
    
    result=4/3*pi*r*r*r;
    printf("\nThe volume of a sphere is: %d",result);
    
    return 0;
}

int volume(int r)
{
    int answer;
    answer= 4/3*pi*r*r*r;
    
    return answer;
}
