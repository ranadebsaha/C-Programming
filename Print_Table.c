#include <stdio.h>
int main() {

int a,i,j;

printf("Enter Your number for Table: ");

scanf("%d",&j);

for(i=1;i<=10;i++)

{

   a=i*j;

   printf("%d*%d=%d\n",j,i,a);
}
}
