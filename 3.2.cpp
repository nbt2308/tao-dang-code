#include<iostream>
using namespace std;
int giaithua(int n)
{
	int giaithua = 1;
	for (int i = 2;i <= n;i++)
	{
		giaithua *= i;
	}
	return giaithua;

}
int tinhtohop(int n, int k)
{
	int congthuc = giaithua(n) / (giaithua(k) * giaithua(n - k));
	return congthuc;
}

int main()
{
	int n, k;
	cout << "nhap vao so nguyen k: ";
	cin >> k;
	cout << "nhap vao so nguyen n: ";
	cin >> n;
	cout << "to hop chap" << " " << k << " " << "cua" << " " << n <<" "<<"la"<<":"<< tinhtohop(n, k);
	return 0;
}