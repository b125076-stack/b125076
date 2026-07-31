#include<stdio.h>
int main(){
    int n,X,found=-1;
    int arr[100],rev[100];
    printf("enter the no of integers");
    scanf("%d",&n);
    printf("enter the integers");
    for(int i=0; i<=n;i++){
        scanf("%d",&arr[i]);

        }
    printf("Enter an element to search");
    scanf("%d",&X);
    for(int i=0;i<n;i++){
        if(arr[i]==X){
            found=i;
            break;
        }
    }
    if(found==-1)printf("elements not found");
    else printf("found element at %d",found);
    return 0;
}