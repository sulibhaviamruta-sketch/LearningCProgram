//2 players playing cricket v ,ms ms ball reaches to v or not. reaches true otherwise false
#include<stdio.h>
bool ballReaches(int arr[],int n){
    int maxR=0;
    for(int i=0;i<n;i++){
        if(i>maxR){
            return false;
        }
         int currentR=i+arr[i];
         if(currentR>maxR){
            maxR=currentR;
         }
        else if(maxR>=n-1){
         return true;
    }
} 
        }
int main(){
    int arr[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(ballReaches(arr,n)){
        printf("true");
    }
    else {
        printf("false");
    }
    return 0;
}