#include<stdio.h>
int main()
{
    int memory_size,os_size,n,i,p[10];

    printf("\nEnter memory size : ");
    scanf("%d",&memory_size);
    printf("\nEnter os size :");
    scanf("%d",&os_size);
    memory_size=memory_size-os_size;
    printf("\nEnter no.of process : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter process  sizes %d ",i+1);
    scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
    if(p[i]<memory_size)
    {
    printf("\nprocess %d is allocated ",i+1);
    memory_size=memory_size-p[i];
    }
    else
    {
    printf("\nprocess %d is blocked ",i+1);
    }
    }
        printf("\nExternal Fragmentation %d",memory_size);
}
