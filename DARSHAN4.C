#include<stdio.h>
float power(int x,int n)
{
 if(n==0)
 return1;
 else
 if (n>0)
 return (x*power(x,n-1));
 else
 return(1/x*power(x,n+1));
 }
 main()
 {
 int x,n;
 clrscr();
 printf("enter x,n values\n");
 scanf("%d%d",&x,&n);
 printf("%d to the power of %d is %f",x,n,power(x,n));
 getch();
 }