//Write a program that inverts a given string

#include<stdio.h>

#include<string.h>

main()

{

	char a[50];

	int i,b;

	printf("Enter a string: ");

	gets(a);

	printf("\n\nThe String is: %s",a);

	b=strlen(a);

	//printf("\n%d",b);

	printf("\n\nThe new string is: ");

	for(i=b;i>=0;i--)

	printf("%c",a[i]);

}
