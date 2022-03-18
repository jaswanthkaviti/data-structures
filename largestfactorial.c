#include<stdio.h>
int fact(int arr[i])
{
    if(arr[i]==1){
        return 1;
    }
    return arr[i]*fact(arr[i-1]);
}
int main()
{
    int i,arr[100],n;
     printf("\nenter the array size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nelement is: ");
       scanf("%d",&arr[i]);
    }
    printf("\nthe respective fact are:");
    for(i=0;i<n;i++){
        printf("\n %d",fact(arr[i]));
    }
    return 0;
}