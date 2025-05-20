#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum = sum+a[i];
}
for(int i=0;i<n;i++)
{
     printf("%d ",sum-a[i]);
     sum = sum - a[i];
}
    return 0;
}