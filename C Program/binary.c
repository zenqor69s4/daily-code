#include<stdio.h>
int main(){
    int a[4]={10,20,30,40};
    int low=0,up=3,mid,item,f=0;
    printf("Enter Searching Item:");
    scanf("%d",&item);
    while (low<=up)
    {
        mid=(low+up)/2;
        if(a[mid]==item){
            f=1;break;
        }
        if(a[mid]<item){
            low=mid+1;
        }
        else{
            up=mid-1;
        }
    }
    if(f==1){
        printf("Item found at %d",mid);
    }
    else {
        printf("Item not found");
    }
    
}