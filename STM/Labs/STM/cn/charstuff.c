#include <stdio.h>
#include <string.h>
int main(){
    char data[100];
    int i;
    scanf("%s",data);
    char Flag='F',end='\\';
    for(i=0;data[i]!='\0';i++){
        if(data[i]==Flag || data[i]==end){
            printf("%c",end);
        }
        printf("%c",data[i]);
    }
    return 0;
}