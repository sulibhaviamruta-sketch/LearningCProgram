#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int (*ptr)(int,int)=add;//(if we add befor int const than a variable consatnt ) *p=50 its an error
    int x=10;
    int *const p=&x;
    *p=50;
    //int y=20; p=&y (not) because [pointer is constant]
    printf("%d\n",x);
    printf("%d\n",ptr(10,20));
}