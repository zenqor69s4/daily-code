#include<stdio.h>
#include<stdlib.h>
int main(){
    int item, i=0;
    int a[3]={7,8,9};
    printf("Enter Search Item:");
    scanf("%d",&item);

    while (i<3)
    {
        if(a[i]==item){
            printf("Item found at %d",i);
            exit(0);
        }
        ++i;
    }
    if(a[i]>=3){
        printf("Item not found");
        exit(0);
    }
    return 0;
    
}
