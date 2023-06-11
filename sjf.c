#include<stdio.h>
int main()
{
int n,i,j,temp,p[10],bt[10],ct[10],wt[10],st[10],tat[i];
float ttat=0,twt=0;
printf("Enter no.of process :\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("\nEnter burst time of process p%d :",i);
scanf("%d",&bt[i]);
p[i]=i;
}
printf("\nBefore sorting");
printf("\nprocess\tburst-time\n");
for(i=1;i<=n;i++)
{
printf("p%d\t%d\n",p[i],bt[i]);
}

//sorting process
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(bt[i]>bt[j])
        {
            temp=bt[i];
            bt[i]=bt[j];
            bt[j]=temp;

            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
    }
}
printf("\nAfter sorting ");
printf("\nprocess\tburst-time\n");
for(i=1;i<=n;i++)
{
printf("p%d\t%d\n",p[i],bt[i]);
}

for(i=1;i<=n;i++)
{
    if(i==1)
    {
        ct[i]=bt[i];
        wt[i]=0;
    }
    else
    {
        st[i]=ct[i-1];
        ct[i]=st[i]+bt[i];
        wt[i]=st[i];
    }
}
for(i=1;i<=n;i++)
{
    tat[i]=ct[i];
    ttat=ttat+tat[i];
    twt=twt+wt[i];
}
printf("\nprocess\tburst\tcompletion\tturnaround\tstart\twaitingtime\n");
for(i=1;i<=n;i++)
{
    printf("p%d%8d%9d%15d%17d%16d\n",i,bt[i],ct[i],tat[i],st[i],wt[i]);
}
printf("The average turn around time is = %.2f ",ttat/n);
printf("The average waiting time is = %.2f ",twt/n);

}
