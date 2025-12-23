// ACCEPTED
#include<stdio.h>
int main()
{
    int n,capMax=0,s,e,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&s,&e);
        sum=sum-s+e;
        if(sum>capMax)
            capMax=sum;
    }
    printf("%d",capMax);
    return 0;

}