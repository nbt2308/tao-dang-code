#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
//nguyen mau ham
void xoakytulaso(char str[], char kqua[]);
//ham main
int main()
{
	char str[max];
	printf("nhap chuoi:");
	gets(str);
	char kqua[max];
	xoakytulaso(str, kqua);
	printf("\n\nchuoi sau khi xoa ky tu la so:%s\n", kqua);
	return 0;

}
void xoakytulaso( char str[], char kqua[])
{
	int j = 0;
	int n = strlen(str);
	for (int i = 0; i<n; i++)
	{
		if (!isdigit(str[i]))
		{
			kqua[j++] = str[i];
		}
	}
	
	kqua[j] = '\0';
}
