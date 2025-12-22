//ACCEPTED
#include<stdio.h>
#include <ctype.h>

int main()
{
    char s[101];
    int upper=0,lower=0;
    scanf("%s",s);
    for(int i=0;s[i] != '\0';i++)
    {
        if(isupper(s[i]))
        {
            upper++;
            s[i]=tolower(s[i]);
        }
        else
            lower++;
    }
    if(lower<upper)
        for(int i=0;s[i] != '\0';i++)
        {
            s[i]=toupper(s[i]);
        }
    
    printf("%s",s);
    return 0;
}