#include<stdio.h>
int main()
{
  int a,b;
  x=input();
  y=natural_sum(x);
  output(x,y);
}
int input()
{
  int n;
  printf("enter a number");
  scanf("%d", &n);
  return n;
}
int natural_sum(int n,int sum)
{
  sum=(n*(n+1))/2;
  return sum;
}
void output(int x,int y){
  printf("the sum of natural numbers %d is %d",x,y);
}
