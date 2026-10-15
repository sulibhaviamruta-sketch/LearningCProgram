#include <stdio.h>
int jumpcheck(int nums[], int n)
{
    int jumps = 0;
    int currentEnd = 0;
    int maxReach = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int currentReach=i+nums[i];
        if(maxReach<currentReach){
            maxReach=currentReach;
        }
        if(i==currentEnd){
            jumps++;
            currentEnd=maxReach;
        }
    }
    return jumps;
}
int main(){
    int n;
    scanf("%d",&n);
    int nums[10];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int ans=jumpcheck(nums,n);
    printf("%d",ans);
    return 0;
}