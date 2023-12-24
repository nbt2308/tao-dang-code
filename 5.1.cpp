#include<stdio.h>
#include<iostream>
#define cot 100
#define dong 100
#define max 100
//nguyen mau ham
void nhapmang(int arr[][cot], int a,int b);
void xuatmang(int arr[][cot], int a,int b);
void lietke_dongcot(int arr[][cot], int a, int b);
bool kiemtratangdan(int arr[max], int a);
void kiemtrahangtangdan(int arr[][cot], int a, int b);
int tongdong(int arr[][cot], int b);
void tinhtong_ptudong(int arr[][cot],int a, int b);
int timsoduongtrendong(int arr[][cot], int b, int d);
int timmin(int arr[][cot], int a, int b);
void hoanvi2cot(int arr[][cot], int cot1, int cot2, int a);
void hoanvi(int& m, int& n);
void sapxep(int arr[max], int b);
void sapxeptang(int arr[][cot], int a, int b);
//ham main
int main()
{
	int arr[dong][cot];
	int a, b;
	
	printf("nhap so dong:");
	scanf("%d", &a);
	printf("\nnhap so cot:");
	scanf("%d", &b);

	//nhap mang
	nhapmang(arr, a,b);

	//xuat mang
	printf("\nSau khi xuat mang:\n");
	xuatmang(arr, a,b);

	//liet ke ptu co chi so dong = chi so cot
	lietke_dongcot(arr, a, b);

	//kiem tra tung hang trong mang co tang dan hay chua
	kiemtrahangtangdan(arr, a, b);

	//tinh tong cac ptu tren 1 dong
	tinhtong_ptudong(arr, a, b);

	//tim va tra ve so luong so duong tren dong d
	int d;
	printf("\nnhap d:");
	scanf("%d", &d);
	if (d < 0 || d >= a)
	{
		printf("\nnhap d khong hop le");
	}
	else
	{
		int tim = timsoduongtrendong(arr, b, d);
		printf("\nso luong so duong co tren dong %d la:%d", d, tim);
	}

	//tim va tra ve gia tri nho nhat trong mang
	printf("\n\n");
	int min = timmin(arr, a, b);
	printf("\ngia tri nho nhat trong mang la:%d", min);

	//hoan vi 2 cot
	int cot1, cot2;
	printf("\n\nnhap cot 1:");
	scanf("%d", &cot1);
	printf("\n\nnhap cot 2:");
	scanf("%d", &cot2);
	hoanvi2cot(arr, cot1, cot2, a);
	printf("\nSau khi hoan vi:\n");
	xuatmang(arr, a, b);

	//sap xep tang dan tu trai sang phai cho tung dong
	sapxeptang(arr, a, b);
	printf("\n\nsau khi sap xep tang:\n");
	xuatmang(arr, a, b);
	system("pause");
	
	return 0;
}
void nhapmang(int arr[][cot], int a,int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("\narr[%d][%d]:", i, j);
			scanf("%d", &arr[i][j]);		
		}
	}
}

//xuat mang
void xuatmang(int arr[][cot], int a,int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}
}

//liet ke cac ptu co chi so hang =chi so cot
void lietke_dongcot(int arr[][cot], int a, int b)
{
	printf("\n\nnhung phan tu co chi so dong =chi so cot:");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (i == j)
			{
				printf("\t%d", arr[i][j]);
			}

		}
	}
}

//kiem tra tung hang trong mang co tang dan theo hang hay chua
bool kiemtratangdan(int arr[], int a)
{
	for (int i = 0; i < a-1; i++)
	{
		if (arr[i]>arr[i+1])
		{
			return false;
		}
	}
	return true;

}
void kiemtrahangtangdan(int arr[][cot], int a, int b)
{
	for (int i = 0; i < b; i++)
	{
		if (kiemtratangdan(arr[i], b) == false)
		{
			printf("\n\nhang thu %d khong tang dan", i );
		}
		else
		{
			printf("\n\nhang thu %d tang dan", i );
		}
	}
}
//tinh tong cac ptu tren cung 1 dong
int tongdong(int arr[], int b)
{
	int tong = 0;
	for (int j = 0; j < b; j++)
	{
		tong += arr[j];
	}
	return tong;
}
void tinhtong_ptudong(int arr[][cot], int a, int b)
{
	for (int i = 0; i < b; i++)
	{
		int tong = tongdong(arr[i],b);
		printf("\ntong cac ptu tren dong %d la:%d", i, tong);
	}
}

//tim so luong so duong tren dong d
int timsoduongtrendong(int arr[][cot], int b, int d)
{
	int dem = 0;
	for (int j = 0; j < b; j++)
	{
		if (arr[d][j] > 0)
		{
			dem++;
		}
			
	}
	return dem;
}

//tim gia tri nho nhat trong mang
int timmin(int arr[][cot], int a, int b)
{
	int m = arr[0][0];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (arr[i][j] < m)
			{
				m = arr[i][j];
			}
		}
	}
	return m;
}

//hoan vi 2 cot
void hoanvi2cot(int arr[][cot], int  cot1, int cot2, int a)
{
	for (int i = 0; i < a; i++)
	{
		int tg = arr[i][cot1];
		arr[i][cot1] = arr[i][cot2];
		arr[i][cot2] = tg;
	}
}

//sap xep tang dan tu trai sang phai cho tung dong trong mang
void hoanvi(int& m, int& n)
{
	int tg = m;
	m = n;
	n = tg;
}
void sapxep(int arr[],int n)
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
	for (int i = 0; i < a; i++)
	{
		sapxep(arr[i], b);
	}
}


