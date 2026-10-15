#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0)
    printf("False");
    while(n%3==0){
        n=n/3;
    }
    if(n==1)
    printf("True");
    else
    printf("False");
}