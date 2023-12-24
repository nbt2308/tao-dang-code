#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
//nguyen mau ham
void viethoa(char str[]);
//ham main
int main()
{
	char str[max];
	printf("nhap chuoi:");
	gets(str);
	viethoa(str);
	puts(str);
	return 0;
}

//viet ham doi chu cai dau tien cua tu thanh in hoa
void viethoa(char str[])
{
	int n = strlen(str);
	int tu = true;
	for (int i = 0; i<n; i++)
	{
		if (isspace(str[i]))
		{
			tu = true;
		}
		else if (tu==true)
		{
			str[i] = toupper(str[i]);
			tu = false;
		}
		else
		{
			str[i] = tolower(str[i]);
			
		}
	}
}
