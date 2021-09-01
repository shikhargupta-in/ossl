#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d %d",&a,&b);

    a^=b;
    b^=a;
    a^=b;

    printf("The numbers a = %d, b = %d.",a,b);

    return 0;
}
