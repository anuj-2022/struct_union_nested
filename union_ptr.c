#include<stdio.h>

union emp
{
	int id;
	char name[5];
	char dep[5];
};

int main()
{
	int i,n=0;
	printf("Enter the no of emp :\n");
	scanf("%d",&n);
	
	union emp *s1,s2[n];
	s1=&s2;
	
	for(i=0;i<n;i++)
	{
	printf("Enter the emp id name dep %d:\n",i+1);
	scanf("%d%s%s",&s2[i].id,s2[i].name,s2[i].dep);
	}
	printf("Employee details is :\n");
	for(i=0;i<n;i++)
	{
        printf("%d\t%s\t%s\n",s1->id,s1->name,s1->dep);//its print the correct data of last element of each arrays
	s1++;
	}
	return 0;
}
	
