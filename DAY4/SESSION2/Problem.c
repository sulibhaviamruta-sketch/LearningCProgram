#include<stdio.h>
struct address{
    char village[50];
    int pincode;
};
struct member{
    int id;
    char name[25];
    double share_capital;
    struct address address;
};
int main(){
    struct member arr[10000];
    int n;
    double total;
    scanf("%d ",&n);
    if(n<=0){
        printf("INVALID COUNT \n");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].id);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].share_capital);
        scanf("%s",&arr[i].address.village);
        scanf("%d",&arr[i].address.pincode);
    }
    int maxIndex=0;
    for(int i=0;i<n;i++){
        total+=arr[i].share_capital;
        int max=arr[0].share_capital;
        if(arr[i].share_capital>max){
            max=arr[i].share_capital;
        }
        if(arr[i].share_capital<arr[maxIndex].share_capital){
            maxIndex=i;
        }
         printf("%d\n",arr[i].id);
         printf("%s\n",arr[i].name);
         printf("%f\n",arr[i].share_capital);
         printf("%f\n",arr[i].address.village);
         printf("%f\n",arr[i].address.pincode);
    }
    printf("The total share Capital = %f",total);
    printf("\n \n Highest Holder: ");
    printf("%f \n %s\n ",arr[maxIndex].share_capital,arr[maxIndex].name);
    return 0;
}
//structure problem cooperative member
