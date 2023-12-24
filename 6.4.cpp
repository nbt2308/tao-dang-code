#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *pt;
	pt=(int *)malloc(sizeof(int));
	printf("\ndia chi vung nho :%x",&pt);
	printf("\ngia tri vung nho :%d",*pt);
	return 0;
}
