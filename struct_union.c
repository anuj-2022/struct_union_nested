#include<stdio.h>

struct A
{
        char a[20];
};

struct B
{
        int b;
};

struct all
{
        int c;
        union ui
        {
                struct A y[2];
                struct B z[2];
        }ue;//last initilize data will print correctly
}se;

int main()
{
 se.ue.z[0].b=45;
 se.ue.z[1].b=55;
 
 se.c=99;
 
 scanf("%s",se.ue.y[0].a);
 scanf("%s",se.ue.y[1].a);
 
 printf("index 0 data %d\nindex 1 data %d\n",se.ue.z[0].b,se.ue.z[1].b);
 
 
 
 printf("index 0 string %s\n",se.ue.y[0].a);
 printf("index 1 string %s\n",se.ue.y[1].a);
 
 printf("struct data %d\n",se.c);
 
 printf("struct size %d\n",sizeof(struct all));
 
 printf("union size %d\n",sizeof(union ui));
 

return 0;
}	
