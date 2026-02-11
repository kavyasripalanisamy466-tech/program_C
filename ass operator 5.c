#include <stdio.h>
int main()
{
    int a=9;
    int b=2;
    int q,r;
    scanf("%d %d",&a,&b);
    q=a;
    q/=b;
    r=a;
    r%=b;
    printf("%d %d",q,r);
    scanf("%d %d",&a,&b);
    return 0;
}