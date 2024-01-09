//Write a program in C to separate odd and even integers in separate arrays.

#include<stdio.h>

main()

{int a[100],i,n,x=0,y=0,odd[100],even[100];

printf("Enter the size of array: ");

scanf("%d",&n);

printf("\nEnter %d numbers: ",n);

for(i=0;i<n;i++)

scanf("%d",&a[i]);

printf("\nThe array is: ");

for(i=0;i<n;i++)

printf("%d, ",a[i]);

printf("\nOdd number array is: ");

for(i=0;i<n;i++){

if(a[i]%2!=0)

printf("%d, ",a[i]);

}



printf("\nThe Even number is: ");

for(i=0;i<n;i++){

if(a[i]%2==0)

printf("%d, ",a[i]);

}

}
