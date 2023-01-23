//program for calculating area of a circle
#include<stdio.h>
int main()
{
  int r;
  float pi=3.142,area;
  printf("\nEnter the radius of a circle:");
  scanf("%d",&r);
  area=pi*r*r;
  printf("\nArea of a circle=%f",area);
  return 0;
}