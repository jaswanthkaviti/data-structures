#include <stdio.h>
int main ()
{
    int n,sum=0,num,i=1;
    float avg;
    printf("enter the size");
    scanf("%d",&n);
  while(i<=n)
  {
  printf("number is\n");
  scanf("%d",&num);
  sum=sum+num;
    i++;
}

 avg=(float)(sum)/n;
 printf("average is %f\n",avg);
}