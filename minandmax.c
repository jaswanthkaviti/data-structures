#include<stdio.h>
int main(){
       
       int i,n, max, min;
       int arr[100];
       printf("\n enter your size: ");
       scanf("%d",&n);
       for(i=0;i<n;i++){
           printf("/\nenter your elements:");
           scanf("%d",&arr[i]);
       }
        min=arr[0];
        max=arr[0];
       for(i=0;i<n;i++){
           if(arr[i] > max)
        {
            max = arr[i];
        }
           if(arr[i] < min)
        {
            min = arr[i];
        }
           
       }
       printf("\nmax element is %d",max);
           printf("\nmin element is %d",min);
       return 0;
}