#include<stdio.h>
struct student {
    int roll;
    char name;
    float marks;

};
int main (){
struct student s[5];
printf("ENter details of 5 students;");
for(int i=0;i<=5;i++){
    printf("\n studnets %d\n",i+1);
    printf("roll no:");
    scanf("%d",&s[i].roll);
    printf("name:");
    scanf("%s",s[i].name);
    printf("marks:");
    scanf("%f",&s[i].marks);

}
    printf("roll\t name\t marks\n");
    for(int i=0; i<=5;i++){
        printf("%d\t %s\t %2f\n",s[i].roll,s[i].marks,s[i].marks);

    }
    return 0;
}