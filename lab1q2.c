#include<stdio.h>
int main(){
    int n;
    int arr[100],rev[100];
    printf("enter the no. of integers:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=n;i>=1;i--){
        printf("%d",rev[i]);
    }
    return 0;
}