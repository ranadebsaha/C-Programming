#include <stdio.h>
void main()
{
    int i,large=0, arr[]={90,900,300,500,1100};
    for(i=0;i<5;i++){ 
            if(arr[i]>large){
                large=arr[i];   
            }
    }
   printf("largest Number is : %d\n",large);
}
