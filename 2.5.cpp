#include<iostream>
using namespace std;
bool chinhphuong(int a)
{
	
	for (int i = 1;i <= a;i++)
	{
		int bp = sqrt(a);
			if (bp * bp == a)
			{
				return true;
			}
	}
	
	return false;
}
int main()
{
	int a;
	cout << "nhap vao so nguyen duong:";
	cin >> a;
	if(chinhphuong(a)==true)
	{
		cout << a << " " << "la so chinh phuong";
	}
	else
	{
		cout << a << " " << "khong phai la so chinh phuong";
	}

	return 0;
}