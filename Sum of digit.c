#include<stdio.h>
void main()
{int a,b,i=0;
printf("Enter a number: ");
scanf("%d",&a);
while(a>0)
{b=a%10;
i=i+b;
a=a/10;
}
printf("The sum of the Digit is: %d",i);
}
