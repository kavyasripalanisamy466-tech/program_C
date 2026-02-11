#include <stdio.h>
int main()
{
    int a=5;
    int b=10;
    printf("%d\n",a&&b && a||b);
    int c=0;
    int d=5;
    printf("%d",c&&d && c||d);
    return 0;
}