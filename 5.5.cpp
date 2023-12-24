#include<stdio.h>
#define cot 100
#define dong 100
//nguyen mau ham
void nhapmang(int arr[][cot], int a, int b);
void xuatmang(int arr[][cot], int a, int b);
int kiemtra(int arr[][cot], int a, int b, int x);
void lietke(int arr[][cot], int a, int b);
bool kiemtracong(int dong1, int cot1, int dong2, int cot2);
void cong2mang(int manga[][cot], int mangb[][cot], int arr[][cot], int a, int b);
bool kiemtranhan(int dong1, int cot1, int dong2, int cot2);
void nhan2mang(int manga[][cot], int mangb[][cot], int arr[][cot], int a, int b);
//ham main 
int main()
{
	int arr[dong][cot];
	int manga[dong][cot], mangb[dong][cot];
	int dong1,cot1, dong2,cot2;

	//nhap va xuat 2 mang
	printf("nhap so dong mang A:");
	scanf_s("%d", &dong1);
	printf("\nnhap so cot mang A:");
	scanf_s("%d", &cot1);
	nhapmang(manga, dong1, cot1);
	printf("\nsau khi xuat mang A:\n");
	xuatmang(manga, dong1, cot1);
	printf("\nnhap so dong mang B:");
	scanf_s("%d", &dong2);
	printf("\nnhap so cot mang B:");
	scanf_s("%d", &cot2);
	nhapmang(mangb, dong2, cot2);
	printf("\nsau khi xuat mang B:\n");
	xuatmang(mangb, dong2, cot2);

	//liet ke nhung ptu chi xuat hien 1 lan trong ma tran
	printf("\n\nnhung ptu chi xuat hien 1 lan trong mang A:");
	lietke(manga, dong1, cot1);
	printf("\n\nnhung ptu chi xuat hien 1 lan trong mang B:");
	lietke(mangb, dong2, cot2);

	//Kiểm tra xem hai ma trận có thể thực hiện phép cộng được không? Nếu được thì thực hiện phép cộng hai ma trận
	int kt = kiemtracong(dong1, cot1, dong2, cot2);
	if (kt == false)
	{
		printf("\n\n2 mang khong the cong duoc");
	}
	else
	{
		cong2mang(manga, mangb, arr, dong2, cot2);
	}

	//Kiểm tra xem hai ma trận có thể thực hiện phép nhân được không? Nếu được thì thực hiện phép nhân hai ma trận
	int kt1 = kiemtranhan(dong1, cot1, dong2, cot2);
	if (kt1 == false)
	{
		printf("\n\n2 mang khong the nhan duoc");
	}
	else
	{
		nhan2mang(manga, mangb, arr, dong2, cot2);
	}
	

	return 0;
}
void nhapmang(int arr[][cot], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("\narr[%d][%d]:", i, j);
			scanf_s("%d", &arr[i][j]);
		}
	}
}
void xuatmang(int arr[][cot], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("\t%d",arr[i][j]);
			
		}
		printf("\n");
	}
}

//liet ke phan tu chi xuat hien 1 lan
int kiemtra(int arr[][cot], int a, int b, int x)
{
	int dem = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (arr[i][j] == x)
			{
				dem++;
			}
		}
	}
	return dem;
}
void lietke(int arr[][cot], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			int x = arr[i][j];
			int kt = kiemtra(arr, a, b,x);
			if (kt == 1) printf("\t%d", x);
		}
	}
	printf("\n");
}

//Kiểm tra xem hai ma trận có thể thực hiện phép cộng được không? Nếu được thì thực hiện phép cộng hai ma trận
bool kiemtracong(int dong1, int cot1, int dong2, int cot2)
{
	if (dong1 = dong2 && cot1 == cot2)
	{
		return true;
	}
	else return false;
}
void cong2mang(int manga[][cot], int mangb[][cot], int arr[][cot], int a, int b)
{
	printf("\n\nSau khi cong 2 mang:\n");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = manga[i][j] + mangb[i][j];
				printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}
}

//Kiểm tra xem hai ma trận có thể thực hiện phép nhân được không? Nếu được thì thực hiện phép nhân hai ma trận
bool kiemtranhan(int dong1, int cot1, int dong2, int cot2)
{
	if (dong1 = cot2 && cot1 == dong2)
	{
		return true;
	}
	else return false;
}
void nhan2mang(int manga[][cot], int mangb[][cot], int arr[][cot], int a, int b)
{
	printf("\n\nSau khi nhan 2 mang:\n");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			arr[i][j] = manga[i][j] * mangb[i][j];
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}
}
