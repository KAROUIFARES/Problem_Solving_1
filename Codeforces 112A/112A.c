//ACCEPTED
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[101],s2[101];
    int sum=0;
    scanf("%s",s1);
    scanf("%s",s2);
    for(int i=0;s1[i]!='\0';i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    sum=strcmp(s1,s2);
    if(sum>0)
        printf("%s","1");
    if(sum<0)
        printf("%s","-1");
    if(sum==0)
        printf("%s","0");
    return 0;
}