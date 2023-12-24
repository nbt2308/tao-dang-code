#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *pt;
	pt=(int*)malloc(sizeof(int));
	scanf("%d",pt);
	printf("gia tri vung nho cua con tro:");
	printf("%d",*pt);
	return 0;
}
