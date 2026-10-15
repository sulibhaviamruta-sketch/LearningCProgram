#include<stdio.h>
#include<stdlib.h>
int main(){
    int nums[]={1,2,0,2,1,0,5};
    int *freq=(int*)malloc(7*sizeof(int));
    int hash[4]={0};
    for (int i = 0; i < 7; i++) {
        int num = nums[i];
        int index = num;
        hash[index]++;
    }

    for (int i = 0; i < 4; i++) {
        if (hash[i] > 7 / 2) {
            printf("%d\n", i);
            break;
        }
    }

}//using malloc in array we have to find frequency of element