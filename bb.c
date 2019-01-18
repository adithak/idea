#include <stdio.h>
#include<conio.h>
int main()
{
    int ar[100],i,j,l,num,max=-1;
    clrscr();
    printf("\nHow many elements???");
    scanf("%d",&n);
    for(i=0;i<num;i++)
    {
        scanf("\n%d",&ar[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
        l=ar[i]&ar[j];
        if(l>max)
        {
            max=l;
        }
        }
    }
    printf("\n%d",max);
    getch();
    return 0;
