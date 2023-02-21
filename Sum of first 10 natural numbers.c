//Sum of first 10 natural numbers
#include <stdio.h>
int main()
{
  int a,sum=0;
printf("\nThe sum of first 10 natural nbers is:");
  for(a=1;a<=10;a++)
    {
sum=sum+a;
printf("%d",a);
    }
  
printf("\nThe sum is:%d\n",sum);
return 0;
}
