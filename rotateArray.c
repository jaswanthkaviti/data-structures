
#include <stdio.h>

int main() {
  int arr[10],n,i,d,j,k;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("Enter the elements\n");
      scanf("%d",&arr[i]);
     
  }
  
  printf("Enter the number at the which the rotation wants to takea place\n");
  scanf("%d",&d);
  printf(“\n”);
  d = d-1;
  for(j=d;j<=n;j--){
      printf("%d",arr[j]);
      printf("\n");
      if (j == 0) {
          for (j=d+1; j<n; j++) {
              printf("%d \n", arr[j]);
          }
          break;
      }
  }
   return 0;
}
- [ ] 

