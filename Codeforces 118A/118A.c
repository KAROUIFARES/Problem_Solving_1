// ACCEPTED

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[101],newCh[201]="";
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(toupper(ch[i])!='A' && toupper(ch[i])!='O'&& toupper(ch[i])!='Y'&& toupper(ch[i])!='E'&& toupper(ch[i])!='U' && toupper(ch[i])!='I')
        {  
            newCh[strlen(newCh)]='.';
            newCh[strlen(newCh)]=tolower(ch[i]);
        }
    }
    printf("%s",newCh);

    return 0;
}