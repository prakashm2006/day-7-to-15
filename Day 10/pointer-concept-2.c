#include <stdio.h>

int main()
{
    int a=10,b=20;
    int *it,*csa;
    it=&a;
    csa=&b;
    ++a;
    --b;
    ++*it;
    --*csa;
    printf("%d %d\n",a,b);
    printf("%d %d\n",&a,&b);
    printf("%d %d\n",it,csa);
    printf("%d %d\n",&it,&csa);
    printf("%d %d\n",*it,*csa);

    return 0;
}