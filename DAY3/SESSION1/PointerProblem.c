/*#include<stdio.h>
#include<stddef.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *p=&arr[1];
    int *q=&arr[4];
    int result=q-p;(finding distance between elements using substraction)
    printf("%d",result);
}*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
}