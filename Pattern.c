//i)

//#include <stdio.h>

//

//int main() {

//int n,b=1,i,j,a=0,c;

//for(i=0;i<=5;i++)

//{for(j=1;j<=i;j++)

//printf(" %d",j);

//printf("\n");

//   }

//}

//ii)

//#include <stdio.h>

//

//int main() {

//int i,j;

//for(i=5;i>=1;i--)

//{

//    for(j=5;j>=i;j--)

//printf(" %d",j);

//printf("\n");

//}

//}

//iii)

//#include <stdio.h>

//

//int main() {

//int i,j;

//for(i=1;i<5;i++)

//{

//    for(j=4;j>=i;j--)

//    printf("*");

//    printf("\n");

//}

//}

//iv)

#include <stdio.h>
int main() {

int i,l,j;

for(i=1;i<=4;i++)

{

for(l=1;l<i;l++)

{

    printf(" ");

}

for(j=4;j>=i;j--)

printf("*");

printf("\n");

}

}

//V)

#include <stdio.h>



int main() {

int i,l,j;

for(i=1;i<=4;i++)

{

for(l=3;l>=i;l--)

{

    printf(" ");

}

for(j=1;j<=i;j++)

printf("%d",j);

printf("\n");

}
