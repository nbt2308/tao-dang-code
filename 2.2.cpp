#include<iostream>
using namespace std;
int main()
{
	for (int i = 100;i <= 999;i++)
	{
		int a = i / 100;    //chu so hang tram
		int b = (i / 10) % 10;  //chu so hang chuc
		int c = i % 10;   //chu so hang don vi
		if ((a * b * c) % 9 == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}