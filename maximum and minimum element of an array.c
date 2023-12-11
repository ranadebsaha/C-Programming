// write a program in C to find the maximum and minimum element in array.
#include<stdio.h>
main()
{int a[100],i,n,max,min;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("\nEnter %d numbers: ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nThe array is: ");
for(i=0;i<n;i++)
printf("%d, ",a[i]);
max=a[0];
min=a[0];
for(i=1;i<n;i++){
if(max<a[i])
max=a[i];
}
for(i=1;i<n;i++){
if(min>a[i])
min=a[i];
}
printf("\nThe Maximum number of this array is: %d, and minimum is: %d.",max,min);
}
