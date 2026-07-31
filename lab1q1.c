 #include<stdio.h>
 int main(){
    int n, i;
    int arr[100];
    printf("ENTER THE NO. INTEGERS:");
    scanf("%d",&n);
    printf("ENTER THE INTEGERS");
    for( i=0; i<=0;i++){
        scanf("%d",&arr[i]);
    } 
    int largest =arr[0], smallest= arr[0] ,sum=0;
    float average;
    for( i=0;i<n;i++){
        if(arr[i]>largest)largest=arr[i];
        if(arr[i]<smallest)smallest=arr[i];
        sum+=arr[i];

    }

     average= sum/n;
    printf("The largest integer is%d\n",largest);
    printf("The smallest integer is %d\n",smallest);
    printf("THe average is %2f",average);


    return 0;
 }