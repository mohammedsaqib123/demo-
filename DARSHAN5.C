#include<stdio.h>
main()
{
 int a[100],i,j,n,temp;
 clrscr();
 printf("enter the size of an array\n");
 scanf("%d",&n);
 printf("enter array elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    } } }
    printf("elements after sorting are ...\n");
    for(i=0;i<n;i++)
    {
     printf("%d\t',a[i]);
     }
     getch();
     }