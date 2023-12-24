#include<stdio.h>
int main()
{
	int m;
	int *pt;
	pt=&m;
	scanf("%d",pt);
	printf("\ndia chi cua bien:%x",&m);
	printf("\ndia chi con tro:%x",&pt);
	printf("\ngia tri vung nho ma con tro tro den:%d",*pt);
	return 0;
}
