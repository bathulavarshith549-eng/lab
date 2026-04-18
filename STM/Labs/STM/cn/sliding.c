#include <stdio.h>
int main(){
    int i=0,j,w,n,ack;
    scanf("%d%d",&n,&w);
    while(i<n){
        for(j=0;j<w && i+j<n;j++)
            printf("%d",i+j);
        printf("Ack:");
        scanf("%d",ack);

        if(ack==i) print("loosed send again");
        else i==ack;
    }
}