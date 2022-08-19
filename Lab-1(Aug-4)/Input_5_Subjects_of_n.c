#include<stdio.h>
#include<string.h>
struct student
{
    char t[5];
    char n[100];
    int rollno;
    int sub[5];
}k[100];
void tot(struct student *p,int n)
{
    int tot[100];
    float per[100];
    printf("\n\nDetails of all subjects:\n");
    for(int i=0;i<n;i++)
    {
        tot[i]=0;
        for(int j=0;j<5;j++)
        tot[i]=tot[i]+k[i].sub[j];
        per[i]=(float)tot[i]/5;
        printf("Student Name:%s\n",k[i].n);
        printf("Roll Number : %d\n",k[i].rollno);
        printf("Total : %d\n",tot[i]);
        printf("Percentage : %.2f\n",per[i]);
    }
}
void details(struct student *p,int n)
{
    int rlno;
    printf("\n\nEnter The Roll Number of Student Whose details has to be found: ");
    scanf("%d",&rlno);
    for(int i=0;i<n;i++)
    {
        if(rlno==k[i].rollno)
        {
            printf("\nThe Details of the student with Roll no: %d are:-\n",rlno);
            printf("Name : %s\n",k[i].n);
            for(int j=0;j<5;j++)
            printf("Marks in Subject %d : %d\n",(j+1),k[i].sub[j]);
        }
    }
}
void percentage(struct student *p,int n)
{   
    int tot[100];
    float per[100];
    float range_start,range_end;
    printf("\n\nEnter the Starting Value : ");
    scanf("%f",&range_start);
    printf("Enter the Ending Value : ");
    scanf("%f",&range_end);
    for(int i=0;i<n;i++)
    {
        tot[i]=0;
        for(int j=0;j<5;j++)
        tot[i]=tot[i]+k[i].sub[j];
        per[i]=(float)tot[i]/5;
        if(per[i]>=range_start&&per[i]<=range_end)
        {
            printf("Student Name:%s\n",k[i].n);
            printf("Roll Number : %d\n",k[i].rollno);
            printf("Total : %d\n",tot[i]);
            printf("Percentage : %.2f\n",per[i]);
            printf("\n\n");
        }
    }
}
void marks_sorter(struct student *p,int n)
{
    int t;
    for(int s=0;s<5;s++)
    {
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(k[i].sub[s]>k[j].sub[s])
        {
            t=k[i].sub[s];
            k[i].sub[s]=k[j].sub[s];
            k[j].sub[s]=t;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("Subject %d: ",(i+1));
        for(int j=0;j<n;j++)
        printf("%d ",k[j].sub[i]);
        printf("\n");
    }    
}
int main()
{
    int i=0,n=0;
    printf("\nEnter the Number of Students:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("");
        gets(k[i].t);
        printf("\n\nEnter Student Name %d:- ",(i+1));
        gets(k[i].n);
        printf("Enter Roll Number : ");
        scanf("%d",&k[i].rollno);
        for(int j=0;j<=4;j++)
        {
            printf("Enter Mark of Subject %d: ",(j+1));
            scanf("%d",&k[i].sub[j]);
        }
    }
    tot(&k[n],n);
    details(&k[n],n);
    percentage(&k[n],n);
    marks_sorter(&k[n],n);
    return 0;
}
