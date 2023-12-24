#include<iostream>
#include<math.h>
using namespace std;
void nguyento(int a)
{
	int kiemtra = 0;
	for (int i = 2;i <= sqrt(a);i++)
	{
		if (a % i == 0)
		{
			cout << "sai";
			kiemtra = 1;
		}
			
	}
	if (kiemtra == 0) cout << "dung";
	
}
int main()
{
	 int a;
	 cout << "nhap 1 so:";
	 cin >> a;
	nguyento(a);
	
	return 0;
}