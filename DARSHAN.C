#include<stdio.h>
main()
{
int a[100],i,n,ele,loc=-1;
clrscr();
printf("enter the size of an array\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the search element\n");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
 if a[i]==ele
 {
  loc=i+1;
  break;
  }
  }
 if(loc>0)
 {
  printf("%d element found at &%d location",ele,loc);
  }
  else
  {
  printf("%d is not found",ele);
  }
  getch();
  }