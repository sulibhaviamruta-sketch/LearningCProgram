#include<stdio.h>
#include<stdbool.h>
int main(){
    char str[]="AbgdyBh";
    int hash[52]={0};
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];//int index=str[i]-'A';
        int index=ch-'A';
        hash[index]=hash[index]+1;
    }
    for(int i=0;i<52;i++)
    {
        if(hash[i]>0){
            printf("%c=%d ",i+'A',hash[i]);
        }
    }
    return 0;
}
//convert to lowercase
//if(str[i]>='A'&&str[i]<='Z'){
// str[i]=str[i]+32;  }