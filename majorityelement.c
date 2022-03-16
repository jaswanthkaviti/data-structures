#include <stdio.h> 
int main()
{
    int n;
    printf("array size");
    scanf("%d",&n);
    int array[n];
    int max = 0;
    int count;
    int maxelement;
    for(int i=0; i<n; i++)
    {
        printf("enter element");
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++)
    {
        count=0;
        for(int j=0; j<n; j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max = count;
            maxelement = array[i];
        }    
    }
    printf("%d",maxelement);
    return 0;
}
