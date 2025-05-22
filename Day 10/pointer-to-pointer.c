#include <stdio.h>

int main()
{
    int a=1;
    int *p1,**p2,***p3,****p4;
    p1=&a;
    p2=&p1;
    p3=&p2;
    p4=&p3;
    printf("%d\n",&p4);
    printf("%d %d\n",&p3,p4);
    printf("%d %d %d\n",*p4,p3,&p2);
    printf("%d %d %d %d\n",**p4,*p3,p2,&p1);
    printf("%d %d %d %d %d\n",***p4,**p3,*p2,p1,&a);
    printf("%d %d %d %d %d \n",****p4,***p3,**p2,*p1,a);


    return 0;
}
