#include<stdio.h>
void main(){
    int n,i,num,temp;
    printf("Enter array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements one by one: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Array Elements are: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nEnter element which will be update: ");
    scanf("%d",&temp);
    printf("\nEnter the Updated Value: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==temp){
            arr[i]=num;
        }
    }
    printf("\nYour Updated Array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}