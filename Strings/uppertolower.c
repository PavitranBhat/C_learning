#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
         
        if(str[i]>=65&&str[i]<=90) 
            str[i]=str[i]+32; 
            //if(str[i]>=97&&str[i]<=122) 
                //str[i]=str[i]-32; 
                
    }
    printf("\nLower Case String is: %s\n",str); 
     return 0; 
}