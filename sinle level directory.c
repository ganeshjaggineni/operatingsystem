#include<stdio.h>
int main()
{
int nf=0,i=0,j=0,ch=0;
char dirname[10],fname[10][10],name[10];
printf("\nEnter dirctory name : ");
scanf("%s",dirname);
printf("\nEnter no.of files :");
scanf("%d",&nf);

do
  {
    printf("\nEnter file name to be created :");
    scanf("%s",name);
    for(i=0;i<nf;i++)
    {
    if(strcmp(name,fname[i])==0)
    {
    break;
    }
    }
    if(i==nf)
    {
    strcpy(fname[j++],name);
    nf++;
    }
    else
    {
        printf("There is already a file with name %s ",name);
    }
    printf("\nDo you want to enter another file (yes -1 or no - 0) : ");
    scanf("%d",&ch);
  }
  while(ch==1);
    printf("\nDirectory name = %s ",dirname);
    printf("\nFile names ");
    for(i=0;i<j;i++)
    {
        printf("\n%s",fname[i]);
    }

}
