//related to arrays

#include <stdio.h> 
int main()
{
    int i,arr[100],n,sum;
    printf("\nenter the array size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nelement is: ");
        scanf("%d",&arr[i]);
    }
    printf("the number is:");
    for(i=0;i<n;i++){
  
         if(i==n-1){
            
        arr[i]=arr[i]+1;
        printf("%d",arr[i]);
         }
         else{
              printf("%d",arr[i]);
         }
    }
        
    
    return 0;
}
