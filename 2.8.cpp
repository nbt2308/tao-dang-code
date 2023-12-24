#include<iostream>
using namespace std;
int main()
{
	for (int x = -10;x <= 10;x++)
	{
		for (int y = -5;y <= 5;y++)
		{
			if (2 * x + 3 * y == 5)
			{
				printf("\ncap gia tri thoa man dieu kien la:(%d, %d)", x, y);
			}
		}
	}
	return 0;

}
