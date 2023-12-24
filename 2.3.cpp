#include<iostream>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "nhap so tu nhien n tu 0 den 100:";
		cin >> n;

	} while (n < 0 || n>100);
	cout << n;
	

	
	
	return 0;
}