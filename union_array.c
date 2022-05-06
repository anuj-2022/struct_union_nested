#include <stdio.h>

union student
{
    int roll;
    int marks;
};

int main()
{
    int i,j,n;
    printf("enter the no of student :\n");
    scanf("%d",&n);
    union student u[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter the roll of student %d :\n",i+1);
        scanf("%d",&u[i].roll);
        printf("Enter the marks of student %d :\n",i+1);
        scanf("%d",&u[i].marks);
    }
    
    
    printf("Roll\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",u[i].roll,u[i].marks);
    }
    return 0;
}

