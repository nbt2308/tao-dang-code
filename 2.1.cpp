#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "nhap a:";
	cin >> a;
	cout << "nhap b:";
	cin >> b;
	double x = -b / a;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "phuong trinh vo so nghiem";
		}
		else
		{
			cout << "phuong trinh vo nghiem";
		}
	}
	else
	{
		cout << "phuong trinh co nghiem:" << " " << x ;
	}
	return 0;
}