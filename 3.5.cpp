#include<iostream>
using namespace std;
int tongbp(int n)
{
	int tong = 0;
	for (int i = 1;i <= n;i++)
	{
		tong += i * i;
	}
	return tong;
}


int main()
{
	int n;
	cout << "nhap so nguyen: ";
	cin >> n;
	cout << "tong binh phuong tu 1 den so vua nhap la: " << tongbp(n);
	return 0;
}