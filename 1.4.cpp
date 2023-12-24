#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "nhap so nguyen 1:";
	cin >> a;
	cout << "nhap vao so nguyen 2:";
	cin >> b;
	double tb = (double)(a + b) / 2;
	cout << "gia tri tb cua 2 so nguyen la:" << " " << tb << endl;

	return 0;
}