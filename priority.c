#include<stdio.h>
int main()
{
    int i,j,temp,temp1,temp2,n,p[10],bt[10],pri[10],ct[10],st[10],wt[10],tat[10],finish[10];
    float ttat=0,twt=0;
    printf("\nEnter no.of process :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
           printf("\nEnter burst and priority times of p%d :\n",i);
           p[i]=i;
           scanf("%d",&bt[i]);
           scanf("%d",&pri[i]);
    }
    printf("\nbefore sorting ");
    printf("\nprocess\tburst time\tpriority\n");
    for(i=1;i<=n;i++)
    {
        printf("p%d\t%d\t%d\n",i,bt[i],pri[i]);
    }

    //sorting process
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(pri[i]<pri[j])
            {
            temp=bt[i];
            bt[i]=bt[j];
            bt[j]=temp;

            temp1=pri[i];
            pri[i]=pri[j];
            pri[j]=temp1;

            temp2=p[i];
            p[i]=p[j];
            p[j]=temp2;
        }
        }

    }

    printf("\nafter sorting ");
    printf("\nprocess\tburst time\tpriority\n");
    for(i=1;i<=n;i++)
    {
        printf("p%d\t%d\t\t%d\n",p[i],bt[i],pri[i]);
    }
    //calculating turnaroundtime ,complete and waiting time
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            st[i]=0;
            ct[i]=bt[i];
            wt[i]=st[i];

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
        printf("\nprocess\tbursttime\tpriority\tstarttime\tcompletetime\twaitingtime\tturnaroundtime\n");
        for(i=1;i<=n;i++)
        {
            printf("p%d%12d%13d%20d%18d%18d%18d\n",p[i],bt[i],pri[i],st[i],ct[i],wt[i],tat[i]);
        }
        printf("\nThe average waiting time = %.2f ",twt/n);
        printf("\nThe average turnaround time=%.2f ",ttat/n);
}
