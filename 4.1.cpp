#include<stdio.h>
#include<math.h>
#define max 1000
//nguyen mau ham
void nhapmang(int arr[], int &a);
void xuatmang(int arr[], int a);
int tinhsole(int arr[], int a);
float tinhtbcong(int arr[], int a);
int timmin(int arr[], int a);
int timvitrigtrilonnhat(int arr[], int a);
int kiemtrasochan(int arr[], int a);
void lietkesoduong(int arr[], int a);
void lietkegtrilonhontbc(int arr[], int a);
void lietkesochansole(int arr[], int a);
bool kiemtrasonguyento(int n);
void lietkesonguyento(int arr[], int a);
bool kiemtrasochinhphuong(int n);
void lietkesochinhphuong(int arr[], int a);
void nghichdao(int arr[],int a);
//ham main	
int main()
{
	int arr[max];
	int a;
	
	printf("nhap so phan tu cua mang:");
	scanf_s("%d", &a);


	//nhap mang
	nhapmang(arr, a);


	//xuat mang
	printf("\nSAU KHI XUAT MANG:\n");
	xuatmang(arr, a);


	//tinh tong cac so le trong mang
	printf("\n\n*****TINH TONG CAC SO LE TRONG MANG*****");
	int t = tinhsole(arr, a);
	printf("\n\ntong cac so le trong mang la:%d",t);


	//tinh trung binh cong cac so trong mang
	printf("\n\n*****TINH TRUNG BINH CONG CAC SO TRONG MANG*****");
	float r = tinhtbcong(arr, a);
	printf("\n\ntrung binh cong cac so trong mang la:%f", r);


	//tim min
	printf("\n\n*****TIM MIN TRONG MANG*****");
	int e = timmin(arr, a);
	printf("\n\ngia tri nho nhat trong mang la:%d", e);


	//tim vi tri cua gia tri lon nhat trong mang
	printf("\n\n*****TIM VI TRI CUA GIA TRI LON NHAT*****");
	int u = timvitrigtrilonnhat(arr, a);
	printf("\n\ngia tri lon nhat nam o vi tri:%d", u);


	//kiem tra toan bo cac so chan trong mang
	printf("\n\n*****KIEM TRA TOAN BO SO CHAN TRONG MANG*****");
	int kt = kiemtrasochan(arr, a);
	if (kt == 1) printf("\n\ntoan bo cac phan tu trong mang deu la so chan");
	else printf("\n\nco it nhat 1 phan tu khong phai la so chan");


	//liet ke so duong trong mang
	printf("\n\n*****LIET KE SO DUONG TRONG MANG*****");
	lietkesoduong(arr, a);
	

	//liet ke phan tu co gia tri lon hon trung binh cong cua cac phan tu khac
	printf("\n\n*****LIET KE PHAN TU CO GIA TRI LON HON TRUNG bINH CONG CUA CAC PHAN TU TRONG MANG*****");
	printf("\n\ntat ca cac phan tu co gia tri lon hon trung binh cong cua cac phan tu khac:");
	lietkegtrilonhontbc(arr, a);


	//liet ke so chan tren 1 hang va so le tren 1 hang
	printf("\n\n*****LIET KE SO CHAN, LE TREN 2 HANG*****");
	lietkesochansole(arr, a);


	//liet ke cac phan tu la so nguyen to trong mang
	printf("\n\n*****LIET KE SO NGUYEN TO TRONG MANG*****");
	lietkesonguyento(arr, a);
	
	
	//liet ke so chinh phuong co trong mang
	printf("\n\n*****LIET KE SO CHINH PHUONG TRONG MANG*****");
	lietkesochinhphuong(arr, a);
	printf("\nnghich dao:\n");
	nghichdao(arr,a);
	
	
	system("pause");
	return 0;
}

//nhap mang
void nhapmang(int arr[max], int &a)
{
	for (int i = 0; i < a;i++)
	{
		printf("arr[%d]:", i);
		scanf_s("%d", &arr[i]);

	}
}

//xuat mang
void xuatmang(int arr[max], int a)
{
	for (int i = 0;i < a;i++)
	{
		printf("%d\t", arr[i]);
	}
}

//tinh tong cac so le trong mang
int tinhsole(int arr[max], int a)
{
	int c = 0;
	for (int i = 0;i < a;i++)
	{
		if (arr[i] % 2 != 0)
		{
			c += arr[i];
		}
	}
	return c;
}

//tinh trung binh cong cac so trong mang
float tinhtbcong(int arr[max], int a)
{
	float tb = 0;
	int sum = 0;
	for (int i = 0;i < a;i++)
	{
		sum += arr[i];
		tb = (float)sum / a;
	}
	
	return tb;
}

//tim min
int timmin(int arr[max], int a)
{
	int m=arr[0];
	for (int i = 0;i < a;i++)
	{
		if (m > arr[i])
		{
			m = arr[i];
		}
	}
	return m;
}

//tim vi tri cua gia tri lon nhat trong mang
int timvitrigtrilonnhat(int arr[], int a)
{
	int m = arr[0];
	int vt = 0;
	for (int i = 0;i < a;i++)
	{
		if (arr[i] > m)
		{
			m = arr[i];
			vt = i;
		}
	}
	return vt;
}

//kiem tra toan bo cac so chan trong mang
int kiemtrasochan(int arr[], int a)
{
	for (int i = 0;i < a;i++)
	{
		if (arr[i] % 2 != 0)
		{
			return 0;
		}
	}
	return 1;
}

//liet ke so duong trong mang

void lietkesoduong(int arr[], int a)
{
	int kt = 0;
	printf("\n\ntat ca so duong trong mang la:");
	for (int i = 0;i < a;i++)
	{
		if (arr[i]>0)
		{
			printf("\t%d", arr[i]);
			kt = 1;
		}
	}
	if (kt==0) printf("\tkhong co ");
}

//liet ke phan tu co gia tri lon hon trung binh cong trong mang
void lietkegtrilonhontbc(int arr[], int a)
{
	int sum = 0;
	float tb = 0;
	for (int i = 0;i < a;i++)
	{
		
		sum += arr[i];
		
	}
	tb = (float)sum / a;
	for (int i = 0;i < a;i++)
	{
		if (arr[i] > tb) printf("\t%d", arr[i]);
	}
}

//liet ke so chan, le tren 2 hang 
void lietkesochansole(int arr[], int a)
{
	printf("\n\ncac so chan:");
	for (int i = 0;i < a;i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("\t%d", arr[i]);
		}
	}
	printf("\ncac so le:");
	for (int i = 0;i < a;i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("\t%d", arr[i]);
		}
	}
}

//liet ke so nguyen to trong mang
bool kiemtrasonguyento(int n)
{
	if (n < 2) return false;
	for (int i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
void lietkesonguyento(int arr[], int a)
{
	int kt = 0;
	printf("\n\ntat ca cac so nguyen to trong mang la:");
	for (int i=0;i<a;i++)
	{
		if (kiemtrasonguyento(arr[i])==true)
		{
			printf("\t%d", arr[i]);
			kt = 1;
			
		}
	}
	if (kt == 0) printf("\tkhong co");
}

//liet ke so chinh phuong trong mang
bool kiemtrasochinhphuong(int n)
{
	for (int i = 1;i <= n;i++)
	{
		int bp = sqrt(n);
		if (bp * bp == n) return true;
	}
	return false;
}
void lietkesochinhphuong(int arr[], int a)
{
	int kt = 0;
	printf("\n\ntat ca cac so chinh phuong trong mang la:");
	for (int i = 0;i < a;i++)
	{
		if (kiemtrasochinhphuong(arr[i])==true)
		{
			printf("\t%d", arr[i]);
			kt = 1;
		}
	}
	if (kt == 0) printf("\tkhong co");
}
void nghichdao(int arr[],int a)
{
	for(int i=a-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}
