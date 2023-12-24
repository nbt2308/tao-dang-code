#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "nhap vao so nguyen 1:";
	cin >> a;
	cout << "nhap vao so nguyen 2:";
	cin >> b;
	int tong = a + b;
	int tich = a * b;
	cout << "tong cua 2 co nguyen la:" << " " << tong << endl;
	cout << "tich cua 2 so nguyen la:" << " " << tich << endl;
	return 0;
}