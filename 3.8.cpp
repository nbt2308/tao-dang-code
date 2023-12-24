#include<iostream>
using namespace std;
int ucln(int a, int b)
{
	
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;

	}
	return a;
}
int bcnn(int a, int b)
{
	return (a * b) / ucln(a, b);
}


int main()
{
	int a, b;
	cout << "nhap so nguyen thu nhat: ";
	cin >> a;
	cout << "nhap so nguyen thu hai: ";
	cin >> b;
	cout << "bcnn(" << a << "," << b << ")" << " " << ": " << bcnn(a, b) << endl;
	return 0;

}