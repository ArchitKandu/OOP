#include<stdio.h>
struct employer
{
    int id;
    char name[50];
    int age;
    int bs;
}emp[10];
int main()
{
    int n,i,j;
    printf("\nEnter Number of Employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter details of employer %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&emp[i].id);
        printf("Enter Name: ");
        scanf("%s",emp[i].name);
        printf("Enter Age: ");
        scanf("%d",&emp[i].age);
        printf("Enter Basic Salary: ");
        scanf("%d",&emp[i].bs);
    }
    printf("\n\nDisplaying Information:\n");
    printf("\n----------------------------------------------------------\n");
    printf("|    NAME    |    ID    |    AGE    |    GROSS SALARY    |\n");
    printf("----------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        float da=0.8*emp[i].bs;
        float hra=0.1*emp[i].bs;
        float gs=emp[i].bs+da+hra;
        printf("|    %s    |    %d    |    %d    |    %.2f    |\n",emp[i].name,emp[i].id,emp[i].age,gs);
        printf("----------------------------------------------------------\n");
    }
    printf("\n\n");
    return 0;
}
