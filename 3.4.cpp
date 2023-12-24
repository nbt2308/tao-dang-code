#include<iostream>
using namespace std;
bool tamgiac(int a, int b, int c)
{
	if (a + b > c && a + c > b && c + b > a) 
	{
		return true;
	}
	
	else 
	{
		return false;
	}
		
}
float chuvi(int a, int b, int c)
{
	float cv = a + b + c;
	return cv;
	
}


int main()
{
	float a, b, c;
	cout << "nhap do dai canh thu nhat: ";
	cin >> a;
	cout << "nhap do dai canh thu 2: ";
	cin >> b;
	cout << "nhap do dai canh thu ba: ";
	cin >> c;
	if (tamgiac(a, b, c) == true) cout << "chu vi cua tam giac la: " << chuvi(a, b, c);
	else cout << "khong phai la tam giac";
	return 0;
}