#include<stdio.h>

main()

{int a[100],i,n,x,pos;

printf("Enter the size of array: ");

scanf("%d",&n);

printf("Enter %d numbers: ",n);

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("The array is: ");

for(i=0;i<n;i++)

printf("%d, ",a[i]);

printf("\nEnter the value: ");

scanf("%d",&x);

printf("\nEnter the position to be insert: ");

scanf("%d",&pos);

for(i=n;i>pos;i--)

a[i]=a[i-1];

a[pos]=x;

printf("\nThe new array is: ");

for(i=0;i<=n;i++)

printf("%d, ",a[i]);

}
