#include<stdio.h>
int main()
{
int resources,process,avail[10],req[10][10],j,i,k,flag=0;
printf("\nEnter no.of resoruces : ");
scanf("%d",&resources);
for(i=0;i<resources;i++)
{
printf("\nEnter  instance  resource %d ",i+1);
scanf("%d",&avail[i]);
}
printf("\nEnter no.of process ");
scanf("%d",&process);
//getting input of required resources

for(i=0;i<process;i++)
{

for(j=0;j<resources;j++)
{
    printf("request process  p%d resource %d ",i+1,j+1);
scanf("%d",&req[i][j]);
}
}
for(i=0;i<process;i++)
{
    flag=0;
for(j=0;j<resources;j++)
{
if(req[i][j]>avail[j])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\nThe process p%d is blocked  to avoid deadlock ",i+1);
}
else
{
for(k=0;k<resources;k++)
{
avail[k]=avail[k]-req[i][k];
printf("\n%d instances of resource %d is allocated to process p%d",req[i][k],k+1,i+1);
}
}

}
for(k=0;k<resources;k++)
{
printf("\nthe available resource %d  ",avail[k],i+1);
}
}
