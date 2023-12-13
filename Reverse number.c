#include<stdio.h>
main()
{int a,b;
printf("Enter a number: ");
scanf("%d",&a);
printf("The reverse number is: ");
while(a>0)
{b=a%10;
printf("%d",b);
a=a/10;
}
return 0;
}
