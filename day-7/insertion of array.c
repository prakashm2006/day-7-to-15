#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    scanf ("%d",&arr [i]);
int pos, value;
scanf("%d %d", &pos,&value);
for (int i=n; i>=pos; i--)
   {
arr [i] = arr [i - 1];
   }
   arr [pos] = value;
     n++;
for (int i=0; i<n; i++)
  {
printf("%d" ,arr [i]);
  }

    return 0;
}