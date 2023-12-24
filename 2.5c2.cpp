#include<stdio.h>
#include<math.h>
bool chinhphuong(int a)
{
	for (int i = 0;i < a;i++)
	{
		int bp = sqrt(a);
		if (bp * bp == a)
			return true;

	}
	return false;
}

int main()
{
	int a;
	printf("nhap 1 so: ");
	scanf_s("%d", &a);
	if (chinhphuong(a) == true) printf("so vua nhap la so chinh phuong.");
	else printf("so vua nhap khong phai la so chinh phuong.");
	return 0;
}