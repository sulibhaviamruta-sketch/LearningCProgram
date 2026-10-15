#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=malloc(sizeof(int));
    *ptr=100;
    printf("%d\n",*ptr);
    free(ptr);
    //after free ptr not in access
    printf("%p",*ptr);
}