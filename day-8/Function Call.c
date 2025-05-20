#include <stdio.h>
void csa()
{
    printf("\nI am in csa fun");
    it();
    printf("\nI am back to csa fun");
}
void it()
{
    printf("\nI am in it fun");
}
int main()
{
    printf("I am in main fun");
    csa();
    printf("\nI am back to main fun");
    return 0;
}
 