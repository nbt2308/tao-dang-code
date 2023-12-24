#include<iostream>
using namespace std;
double tongbpnd(int n)
{
	double tong = 0.0;
	for (int i = 1;i <= n;i++)
	{
		tong +=  1.0/(i * i);
	}
	return tong;
}


int main()
{
	int n;
	cout << "nhap so nguyen: ";
	cin >> n;
	cout << "tong binh phuong nghich dao tu 1 den so vua nhap la: " << tongbpnd(n);
	return 0;
}