#include<stdio.h>
#define cot 100
#define dong 100
void nhapmang(int arr[][cot],int a,int b);
void xuatmang(int arr[][cot],int a,int b);
void sapxepmang1chieu(int arr[100],int n);
void hoanvi(int& m, int& n);
void sapxeptang(int arr[][cot], int a, int b);
int main()
{
	int arr[dong][cot];
	int a;
	int b;
	printf("nhap so dong:");
	scanf("%d",&a);
	printf("nhap so cot:");
	scanf("%d",&b);
	
	//nhap mang
	nhapmang(arr,a,b);
	
	//xuat mang
	printf("\n\nSau khi xuat mang:\n");
	xuatmang(arr,a,b);
	
	//sap xep
	printf("\n\nSau khi sap xep:\n");
	sapxeptang(arr,a,b);
	xuatmang(arr,a,b);
	return 0;
}
void nhapmang(int arr[][cot],int a,int b)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuatmang(int arr[][cot],int a,int b)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

//sap xep
void hoanvi(int& m, int& n)
{
	int tg = m;
	m = n;
	n = tg;
}
void sapxepmang1chieu(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i]>arr[j])
			{
				hoanvi(arr[i],arr[j]);
			}
		}
	}
}
void sapxeptang(int arr[][cot], int a, int b)
{
	int mang[1000];
	int bien=0;
	
	for (int i = 0; i < a; i++)
	{
		for(int j=0;j<b;j++)
		{
			mang[bien++]=arr[i][j];
			
		}
		
	}
	
	int tichdongcot=a*b;
    sapxepmang1chieu(mang,tichdongcot);
    bien=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			arr[i][j]=mang[bien++];
		}
	}
	
}


