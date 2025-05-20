#include <stdio.h>

int main()
{
 int arr[] = {1,2,3,4,5};
 int n = sizeof(arr) / sizeof(arr[0]);
 int pos;
 scanf("%d",&pos);
for(int i = pos; i < n - 1 ; i++)
   {
    arr[i]=arr[i+1];
   }
   n--;
for(int i = 0; i < n; i++)
   {
    printf("%d ",arr[i]);
   }
    return 0;
}