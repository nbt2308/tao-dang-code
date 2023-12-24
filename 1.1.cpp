#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	int b;
	double c;
	cout << "nhap vao 1 ky tu:";
	cin >> a;
	cout << "nhap vao 1 so nguyen:";
	cin >> b;
	cout << "nhap vao so thuc:";
	cin >> c;
	cout << "ky tu co do rong la 3:" << setw(3) << a << endl;
	cout << "so nguyen co do rong la 6:" << setw(6) << b << endl;
	cout << "so thuc co do rong la 8 va 3 so le:" <<fixed<< setprecision(3)<< setw(8)<< c << endl;
	return 0;
}