#include <stdio.h>
#include <string.h>

int main() {
    long long n;
    char ch[25];
    int nb4=0,nb7=0;

    scanf("%lld", &n);
    
    sprintf(ch, "%lld", n);

    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='4')
            nb4++;
        if(ch[i]=='7')
            nb7++;
            
    }

    if(nb7+nb4==strlen(ch) && nb7 !=0 && nb4!=0)
        printf("YES");
    else printf("NO");
    return 0;
}