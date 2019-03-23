#include<stdio.h>
int float(int n)
{
 if(n==0)
 return();
 else
 return(n*fact(n-1));
 }
 void main()
 {
  int n,r,ncr;
  printf("enter n and r values");
  scanf("%d%d",&n,&r);
  ncr=fact(n)/(fact(r)*fact(n-r));
  printf("ncr=%d",ncr);
  }
