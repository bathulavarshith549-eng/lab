#include <stdio.h>
#include <string.h>
int main(){
    char data[100];
    int i ,count=0;
    scanf("%s",data);
    for(i=0;data[i]!='\0';i++){
        if(data[i]=='1') count++;
        else count=0;
        printf("%c",data[i]);
        if(count==5){
            printf("0");
            count=0;
    }
    }
    return 0;
}