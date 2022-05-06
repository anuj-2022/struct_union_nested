#include <stdio.h>

struct result
{
    int num;
    int roll;
//    char grad;
};

int main()
{
    int i,marks=0,n;
    printf("Enter the no of student data :\n");
    scanf("%d",&n);
    struct result r[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of student %d :\n",i+1);
        scanf("%d",&r[i].num);
        
        printf("Enter the roll no of student %d :\n",i+1);
        scanf("%d",&r[i].roll);
        
    }
    printf("roll no\tMarks\tGrade\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t",r[i].roll,r[i].num);
        
        marks=r[i].num;
    
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry\n");
    }
    else if(marks<50)
    {
        printf("F\n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("D\n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("C\n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("B\n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("A\n");
    }
    else
    {
        printf("A+\n");
    }
    }

    return 0;
}

