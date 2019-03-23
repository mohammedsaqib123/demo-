#include<stdio.h>
main()
{
 int a[100],i,n,ele;
 int low,high,mid,loc=-1;
 clrscr();
 printf("enter the array size\n");
 scanf("%d",&n);
 printf("enter array elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the search element\n");
 scanf("%d",&ele);
 low=0;
 high=n-1;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(ele==a[mid])
  loc=mid+1;
  break;
  if(ele<a[mid])
  high=mid-1;
  else
  low=mid+1;
  }
  if(loc>0)
  {
   printf("%d element found at %d location ele",loc);
   }
   else
   {
    printf("%d element not found",ele);
    }
    getch();
    }