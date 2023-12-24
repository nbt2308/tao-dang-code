#include<stdio.h>
int ucln(int a, int b)
{
	if (a == 0 && b == 0)
	{
		return a + b;
	}
	else
	{
		while(a!=b)
		{
			if (a > b)
			{
				a -= b;  //nay` la a=a-b 
			}
			else
			{
				b -= a; //nay nguoc lai
			}
		}
		return a; //khuc nay return a hoac b deu dc tai a voi b = nhau r
	}
}
int main()
{
	int a, b;
	printf("nhap so thu nhat: ");
	scanf_s("%d", &a);
	printf("nhap so thu hai: ");
	scanf_s("%d", &b);
	printf("uoc chung luon nhat cua 2 so la: %d", ucln(a, b));
	return 0;

}