//8. Write a C program to delete an element from an array

#include<stdio.h>

main()

{int a[100],i,n,x,del;

printf("Enter the size of array: ");

scanf("%d",&n);

printf("Enter %d numbers: ",n);

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("The array is: ");

for(i=0;i<n;i++)

printf("%d, ",a[i]);

printf("\nEnter the value of delete: ");

scanf("%d",&x);

printf("The new array is: ");

for(i=0;i<n;i++)

{

if(a[i]==x)

continue;

printf("%d, ",a[i]);

}

}
