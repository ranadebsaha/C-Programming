#include <stdio.h>

int main() {

int n,b=1,i,j,a=0,c;

printf("Enter the last number of range: ");

scanf("%d",&n);

printf("Fibonacci Series: ");

for(i=0;i<=n;i++)

{printf("%d\t",a);

    c=a+b;

a=b;

b=c;

   }

}
