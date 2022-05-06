#include <stdio.h>

union u
{
    struct s
    {
    int a;
    int b;
    }se;
    
    int c[sizeof(struct s)/4];

}ue;


int main()
{
    ue.se.a=65;
    ue.se.b=78;
    printf("using struct %d\t%d\n",ue.se.a,ue.se.b);
    printf("using union %d\t%d\n",ue.c[0],ue.c[1]);
    
    //modify the data structure data using the union
    ue.c[0]=157;
    ue.c[1]=139;
    printf("using struct %d\t%d\n",ue.se.a,ue.se.b);
    printf("using union %d\t%d\n",ue.c[0],ue.c[1]);

    return 0;
}

	
