#include<stdio.h>
int gcd(int,int);
main()
{
 int a,b,result;
 clrscr();
 printf("enter a b values\n");
 scanf("%d%d",&a,&b);
 result=gcd(a,b);
 printf("gcd of %d and %d is %d",a,b,result);
 getch();
 }
 int gcd(int a,int b)
 {
  if(a==b)
  return a;
  else
  if(a>b)
  return gcd(a-b,a);
  else
  return gcd(a,b-a);
  }