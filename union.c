#include<stdio.h>

union student
{
	int roll;
	float marks;
	char Grad;
};

int main()
{
	union student r;
	r.roll=145;
	r.marks=91.5;
	r.Grad='A';
	printf("roll no %d\nmarks %f\nGrad %c\n",r.roll,r.marks,r.Grad);
	return 0;
}
