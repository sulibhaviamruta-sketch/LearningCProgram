#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    //malloc
    int *ptr=(int*)malloc(n*sizeof(int));
//(int*)because malloc contain garbage values in string becz we type cast to int
    free(ptr);
    //if not  if we stored any value after this

}