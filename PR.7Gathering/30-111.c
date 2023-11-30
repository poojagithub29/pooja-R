#include <stdio.h>
int add(int a, int b)
{

    int c = a + b;

    return c;
}
int subscription(int a, int b)

{

    int c = a - b;

    return c;
}
int multiplication(int a, int b)

{
    int c = a * b;

    return c;
}
int divide(int a, int b)

{
    int c = a / b;

    return c;
}
int persent(int a, int b)
{
    int c = a % b;

    return c;
}
int main()
{

    int x, y, z, l, p;
    printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %%\n");
    printf("press 0 for the exit \n");
    printf("enetr your choise: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:

        printf("first number:");
        scanf("%d", &y);
        printf("second number:");
        scanf("%d", &z);
        printf("addition of %d and %d is %d", y, z, add(y, z));

        break;
    case 2:

        printf("first number: ");
        scanf("%d", &y);
        printf("second number: ");
        scanf("%d", &z);
        printf("subsciption of %d and %d is %d", y, z, subscription(y, z));

        break;

    case 3:
        printf("first number: ");
        scanf("%d", &y);
        printf("second number: ");
        scanf("%d", &z);
        printf("multiplication of %d and %d is %d", y, z, multiplication(y, z));

        break;
    case 4:
        printf("first number: ");
        scanf("%d", &y);
        printf("second number: ");
        scanf("%d", &z);
        printf("divide of %d and %d is %d", y, z, divide(y, z));

        break;
    case 5:
        printf("first number: ");
        scanf("%d", &y);
        printf("second number: ");
        scanf("%d", &z);
        printf("module of %d and %d is %d", y, z, persent(y, z));
        break;
    case 0:

        break;
    }
    return 0;
}
