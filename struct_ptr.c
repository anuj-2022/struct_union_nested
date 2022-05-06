#include<stdio.h>

struct emp
{
	char name[5];
	int  id;
	char dep[5];
};

int main()
{
	int i,n;
	printf("Enter the no of employee :\n");
	scanf("%d",&n);
	struct emp *s1,s2[n];
	s1=&s2;
	for(i=0;i<n;i++)
	{
	printf("enter the name id and dep : %d\n",i+1);
	scanf("%s%d%s",s2[i].name,&s2[i].id,s2[i].dep);
	}	
	printf("enter the name id and dep :\n");
	for(i=0;i<n;i++)
	{	
	printf("%s\t%d\t%s\n",s1->name,s1->id,s1->dep);
	s1++;
	}
	return 0;
}
