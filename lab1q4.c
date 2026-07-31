#include<stdio.h>
void swapper(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter two no.");
    scanf("%d",&a,&b);
    swapper(&a,&b);
    printf("after swapping");
    printf("%d %d",a,b);
    return 0;
}
