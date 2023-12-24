#include<iostream>
using namespace std;

int main()
{
	unsigned int i, dvi;
	int sodao = 0;
	cout << "nhap 1 so:";
	cin >> i;
	while (i > 0)
	{
		dvi = i % 10; 
		sodao = sodao * 10 + dvi;
		i = i / 10;

	}
	cout << sodao;
	
	return 0;
}
/*
* cho i=1234

 dvi=i%10=4
 sodao=sodao*10+dvi=0*10+4=4
 i=i/10=1234/10=123

 dvi=3
 sodao=4*10+3=43
 i=12


 dvi=2
 sodao=43*10+2=432
 i=1

 dvi=1
 sodao=432*10+1=4321
 i=0 (i=0 ko thoa dkien->>in ra man hinh sodao)

 
 */