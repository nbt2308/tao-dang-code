#include<iostream>
using namespace std;
#define PI 3.14
float tinhchuvihinhtron(int R)
{
	float cv = PI * 2 * R;
	return cv;
}
int main()
{
	int R;
	cout << "nhap vao ban kinh hinh tron: ";
	cin >> R;
	cout << "chu vi hinh tron la:" << tinhchuvihinhtron(R);
	return 0;
}