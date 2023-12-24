#include<stdio.h>
int main()
{
	int a;
	int tong = 0;
	do
	{
		printf("nhap 1 so nguyen va tinh tong cac so nguyen ,neu kq tren 100 thi in ra man hinh kq:");
		scanf_s("%d", &a);
		tong += a;
	} while (tong <= 100);
	printf("tong cac so vua nhap la:%d", tong);
	return 0;

}