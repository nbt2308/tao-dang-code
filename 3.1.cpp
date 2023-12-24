#include<iostream>
#include<math.h>
using namespace std;
//nguyen mau ham
bool sohoanhao(int n);
//ham main
int main()
{
	int n;
	cout << "nhap vao 1 so nguyen duong: ";
	cin >> n;
	if (sohoanhao(n) == true) cout << "day la so hoan hao";
	else cout << "day khong phai la so hoan hao";
	return 0;
}
bool sohoanhao(int n)
{
	int tong = 0;
	for (int i = 1;i < n;i++) //bc này là chạy vòng lặp để tìm ước 
	{
		if (n % i == 0)  //bước này là tìm ước rồi cho tổng các ước (trừ chính nó) 
		{
			tong += i;
		}
	}

	if (tong == n) //bc này ktra xem tổng đó bằng số vừa nhập ko
	{
		return true;
	}

	else
	{
		return false;
	}
}