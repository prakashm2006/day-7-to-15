#include <stdio.h>
int search(int n, int a[], int element)
{
    int i;
    for (i = 0; i < n; i++)
        if (element == a[i])
            return i;
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n); 
    int a[n], i, element;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        scanf("%d", &element); 
    int p = search(n, a, element);
    if (p != -1)
        printf("Yes");
    else
        printf("No");
        return 0;
}        