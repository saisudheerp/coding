#include<stdio.h>
main()
{
     int a[20],n;
     printf("enter the number of elements\n");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     reverse(a,n);
     for(int i=0;i<n;i++)
     {
          printf("%d\n",a[i]);
     }
}
void reverse(int a[20],int n)
{
     int temp;
     for(int i=0;i<n/2;i++)
     {
          temp=a[i];
          a[i]=a[n-i-1];
          a[n-i-1]=temp;
     }
}
