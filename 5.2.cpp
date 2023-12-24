#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
using namespace std;
//nguyen mau ham
int demsoluong(char str[], char ch);
void gets_s(char str[100]);
int demsluongtu(char str[]);
void lietketu(char *str);
void chuanhoa(char str[]);
//ham main
int main()
{
	char str[max];
	char ch;
	
	
	printf("nhap vao 1 chuoi:");
	gets(str);
	
	

	//dem so luong chu cai ch(ch nhap tu ban phim)
	printf("\n\nnhap ky tu muon ktra:");
	scanf("%c", &ch);
	int n=demsoluong(str, ch);
	printf("\n\nso luong chu %c trong chuoi la:%d", ch, n);

	//dem so luong tu trong chuoi
	int a = demsluongtu(str);
	printf("\n\nso luong tu co trong chuoi la:%d", a);

	//liet ke tu co trong chuoi, moi tu tren 1 dong
	lietketu(str);

	//chuan hoa
	chuanhoa(str);
	printf("\nsau khi chuan hoa:\n");
	puts(str);
	return 0;
}

//dem so luong chu cai ch(ch nhap tu ban phim)
int demsoluong(char str[], char ch)
{
	int dem = 0;
	int n = strlen(str);
	for (int i = 0; i<n; i++)
	{
		if (str[i] == ch)
		{
			dem++;
		}
	}
	return dem;
}

//dem so luong tu co trong mang
int demsluongtu(char str[])
{
	int dem = 1;
	int n = strlen(str);
	for (int i = 0; i<n; i++)
	{
		if (str[i] == ' ' && str[i+1]!=' ')
		{
			dem++;
		}
	}
	return dem;
}

//Liet ke cac tu co trong chuoi
void lietketu(char* str)
{
	printf("\n\ncac tu trong chuoi:\n");
	char* bansao = strdup(str);
	char* tach = strtok(bansao, " ");
	int n = strlen(tach);
	for (int i = 0; i < n; i++)
	{
		
		printf("%s\n", tach);
		tach = strtok('\0', " ");
	}
	
	

}

//chuan hoa chuoi
void chuanhoa(char str[])
{
	int n = strlen(str);

	//xoa cac khoang trang o dau chuoi
	while(str[0]==' ')
	{
		for (int i = 0; i<n; i++)
		{
			str[i] = str[i + 1];
		}
	}
	//xoa cac khoang trang o cuoi chuoi
	for (int i = 0; i<n; i++)
	{
		if (str[n - 1] == ' ')
		{
			str[n - 1] == '\0';
		}
	}
	//xoa cac khoang trang o giua cac tu trong chuoi
	for (int i = 0; i<n; ++i) 
	{
		if (str[i] == ' ' && str[i + 1] == ' ') 
		{
			for (int j = i; j<n; ++j) 
			{ 
				str[j] = str[j + 1];
			}
			--i;
		}
	}
}
