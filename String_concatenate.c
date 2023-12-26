//3. Write a program to concatenate two strings

#include<stdio.h>

#include<string.h>

main()

{

	char a[50],b[50],c[50];

	int i,j,len2,len1,len3;

	printf("Enter a string: ");

	gets(a);

	printf("Enter another string: ");

	gets(b);

	len1=strlen(a);

	len2=strlen(b);

	len3=len1+len2;		

	for(i=0;i<len1;i++)

	c[i]=a[i];

	for(i=0,j=len1;i<=len2,j<=len3;i++,j++)

	c[j]=b[i];

	printf("The new string is: ");

	printf("%s",c);

