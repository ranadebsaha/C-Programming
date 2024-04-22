#include <stdio.h>
int main() {

int i,a=0,n;

printf("Enter last value of the range: ");

scanf("%d",&n);

for(i=1;i<=n;i++)

a=a+i;

printf("Sum of the all natural number between 1 to %d is: %d",n,a);
}
