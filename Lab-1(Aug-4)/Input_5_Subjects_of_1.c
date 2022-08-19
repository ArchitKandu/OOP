#include<stdio.h>
struct marks
{
    char name[50];
    int rollno;
    float sub[5];
} std1;
int main()
{
    int i;
    printf("Enter Students information:\n");
    printf("Enter Name: ");
    gets(std1.name);
    printf("Enter Roll No.: ");
    scanf("%d",&std1.rollno);
    for(i=0;i<5;i++)
    {
        printf("Enter marks in subject %d: ",i+1);
        scanf("%f",&std1.sub[i]);
    }
    printf("\nInformation is:\n");
    printf("Name is: %s\n",std1.name);
    for(i=0;i<5;i++) printf("Marks in subject %d: %.2f\n",i+1,std1.sub[i]);
    return 0;
}
