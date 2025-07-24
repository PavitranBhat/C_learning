#include<stdio.h>
#include<strings.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int ispalidrome=1;

    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            ispalidrome=0;
            break;

        }
    }
    if(ispalidrome){
         printf("yes");
    }else{
        printf("No");
    }
return 0;
}