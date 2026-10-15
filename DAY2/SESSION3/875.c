//1bunch per hour ,hours=8,we have to complete exactly in 8 hours 
#include<stdio.h>
int eatingSpeed(int bunches[],int size,int h){
    int left=1;
    int right=0;
    //max element
    for(int i=0;i<size;i++){
        if(bunches[i]>right)
        right=bunches[i];
    }
    int speed=right;
    while(left<=right){
        int mid=(left+right)/2;
        int totalhours=0;
        for(int i=0;i<size;i++){
            totalhours+=(bunches[i]+mid-1)/mid;
        }
        if(totalhours<=h)
        {
            speed=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return speed;
}
int main(){
    int bunches[]={3,6,7,11};
    int h=8;
    int n=sizeof(bunches)/4;
    int ans=eatingSpeed(bunches,n,h);
    printf("\n\n%d\n\n",ans);
}