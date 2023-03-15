//Determining a positive and a negative number
#include<stdio.h>
int main()
{
  int a;
  printf("\nEnter the value of a:");
  scanf("%d",&a);

  if (a>0){
    printf("\na is positive:");
  }
  else if(a<0){
    printf("\na is negative:");
  }
  else{
    printf("\n0 is neither positive nor negative:");
  }
  return 0;
  }
