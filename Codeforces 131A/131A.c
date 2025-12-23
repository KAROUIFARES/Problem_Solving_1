#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char ch[101]="",nbUpper=0,nbLower=0;
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(isupper(ch[i]))
            nbUpper++;
        else nbLower++;
    }
    if(islower(ch[0]) && nbLower==1 && nbUpper==strlen(ch)-1 )
    {
        ch[0]=toupper(ch[0]);
        for(int i=1;ch[i]!='\0';i++)
        {
            ch[i]=tolower(ch[i]);
        }
    }
    if(nbUpper==strlen(ch))
    {
        for(int i=0;ch[i]!='\0';i++)
        {
            ch[i]=tolower(ch[i]);
        }
    }
    printf("%s",ch);
    return 0;
}