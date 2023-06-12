#include<stdio.h>
struct st{
char dname[10];
char sdname[10][10];
char fname[10][10][10];
int ds,sds[10];
}dir[10];
int main()
{
int n,i,j,k;
printf("\nEnter no.of directories : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter directory  %d name :",i+1);
scanf("%s",dir[i].dname);
printf("\nEnter directory size :");
scanf("%d",&dir[i].ds);
for(j=0;j<dir[i].ds;j++)
{
printf("\nEnter sub directory %d name  and size :",j+1);
scanf("%s",dir[i].sdname[j]);
scanf("%d",&dir[i].sds[j]);
for(k=0;k<dir[i].sds[j];k++)
{
printf("\nEnter file %d name ",k+1);
scanf("%s",dir[i].fname[j][k]);
}
}
}

printf("\ndir_name\t\tdir_size\tsub_dir_name\tsub_dir_size\tfile_name");
printf("\n***************************************************************\n");
for(i=0;i<n;i++)
{
printf("%s\t\t%d",dir[i].dname,dir[i].ds);
for(j=0;j<dir[i].ds;j++)
{
printf("\t%s\t\t%d\t",dir[i].sdname[j],dir[i].sds[j]);
for(k=0;k<dir[i].sds[j];k++)
{
printf("%s ",dir[i].fname[j][k]);
printf("\n\t\t");
}
}
printf("\n");
}

}
