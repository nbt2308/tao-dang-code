#include<stdio.h>
int main()
{
	float *p1;
	float *p2;
	float n;
	p1=&n;
	p2=&n;
	*p1=100;
	*p2=50;
	printf("gia tri fx:%f",n);
	printf("\ndia chi fx:%x",&n);
	printf("\ngia tri p1:%x",p1);
	printf("\ngia tri p2:%x",p2);
	return 0;
}
