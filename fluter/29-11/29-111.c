#include <stdio.h>

int sum()
{
    int n;

    printf("array size:");
    scanf("%d", &n);
    int a[n];
    int add = 0;

    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        add = add + a[i];
    }

    printf("the sum of an array:%d", add);

    return 0;
}
int main()
{

    sum();
    return 0;
}
