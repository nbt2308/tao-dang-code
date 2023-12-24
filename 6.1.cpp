#include<stdio.h>
int main()
{
    int n=0;
    int *pt;
    pt=&n;
    scanf("%d",pt);
    printf("%d",*pt);
    return 0;
}
