#include<stdio.h>
int main()
{
    int notes[]={100,50,20,10,5,2,1};
    int n=242;
    int count=0;
    int size = sizeof(notes)/ sizeof(notes[0]);
    for(int i=0; i<size; i++){
        if(n==0)
        break;
        count+=n/notes[i];
        n=n%notes[i];
    }
    printf("Tne Minimum Notes are:%d",count);
    return 0;
}  