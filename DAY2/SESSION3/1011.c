// 1 day 1 truck ,truck capacity
#include<stdio.h>
int truckSpeed(int loads[],int size,int d){
    int left;
    int right;
    //max element
    for(int i=0;i<size;i++){
        if(loads[i]>right)
        left=loads[i];
    }
    for(int i=0;i<size;i++){
        int sum=0;
        sum+=loads[i];
        right=sum;
    }
    int capacity=right;
    while(left<=right){
        int mid=(left+right)/2;
        int days=0;
        for(int i=0;i<size;i++){
            days+=(right+mid-1)/mid;
        }
        if(days<=d)
        {
            capacity=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return capacity;
}
int main(){
    int loads[]={1,2,3,4,5,6,7,8,9,10};
    int d=8;
    int n=sizeof(loads)/4;
    int ans=truckSpeed(loads,n,d);
    printf("\n\n%d\n\n",ans);
}