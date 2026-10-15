// 4 stairs ,1 step or 2 step ,no.of ways
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=2,c;
    if(n<=2){
        printf("%d",n);
    } else{
        for(int i=3; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",b);
    }
    return 0;
}