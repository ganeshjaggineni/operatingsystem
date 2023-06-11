#include<stdio.h>
int main()
{
int no_of_blocks,no_of_files,i,j,block[10],file[10],ff[10],frag[10],temphigh,highest=0,blockstatus[10];
printf("\nEnter no.of blocks : ");
scanf("%d",&no_of_blocks);
printf("\nEnter no.of files : ");
scanf("%d",&no_of_files);
//get input of all blocks sizes
for(i=1;i<=no_of_blocks;i++)
{
printf("\nEnter %d block size : ",i);
scanf("%d",&block[i]);
}
for(i=1;i<=no_of_files;i++)
{
printf("\nEnter %d file size : ",i);
scanf("%d",&file[i]);
}
//logic for worst fit
for(i=1;i<=no_of_files;i++)
{
    for(j=1;j<=no_of_blocks;j++)
    {
        if(blockstatus[j]!=1)//block is still not allocted
        {
            temphigh=block[j]-file[i];
            if(temphigh>=0)
            {
                if(highest<temphigh)
                {

                    ff[i]=j;
                        highest=temphigh;
                }
            }
        }
    }
    frag[i]=highest;
    blockstatus[ff[i]]=1;
    highest=0;

}
//printing values
printf("\nfile_no\tFile_size\tBlock_no\tBlock_size\tFragment");
for(i=1;i<=no_of_files;i++)
{
    printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,file[i],ff[i],block[ff[i]],frag[i]);
}
}
