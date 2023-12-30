#include <stdio.h>



int main() {

  int i,a=0,n;

  printf("Enter last value of the range: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)

   {

      if(i%2!=0)

       a=a+i;

  }    



 printf("Sum of the all odd numbers between 1 to %d is: %d",n,a);

}
