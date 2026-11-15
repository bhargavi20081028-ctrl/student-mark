#include<stdio.h>
extern unsigned_floatconvert;
struct student
{
char name[20];
int rollno;
int marks;
char city[20];
char dream[20];
};
void read(struct student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\nEnter the name:");
scanf("%s",&s[i].name);
printf("Enter the rollno:");
scanf("%d",&s[i].rollno);
printf("Enter the marks:");
scanf("%d",&s[i].marks);
printf("Enter the city:");
scanf("%s",&s[i].city);
printf("Enter the dream:");
scanf("%s",s[i].dream);
}
}
void display(struct student s[],int n)
{
int i;
printf("\n----Students Details----\n");
for(i=0;i<n;i++)
{
printf("Student %d\n",i+1);
printf("Student Name:%s\n",s[i].name);
printf("Student Rollno:%d\n",s[i].rollno);
printf("Student marks:%d\n",s[i].marks);
printf("Student City:%s\n",s[i].city);
printf("Student Dream:%d\n",s[i].dream);
}
}
int main()
{
struct student s[10];
read(s,10);
display(s,10);
return 0;
}