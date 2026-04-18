#include<stdio.h>
#include<string.h>

int main(){
    char d[50], g[20];
    int i,j,n;

    scanf("%s%s", d, g);
    n = strlen(g);

    for(i=0;i<n-1;i++) strcat(d,"0");

    for(i=0;i<strlen(d)-n+1;i++)
        if(d[i]=='1')
            for(j=0;j<n;j++)
                d[i+j]=(d[i+j]==g[j])?'0':'1';

    printf("CRC: %s",&d[strlen(d)-n+1]);
}