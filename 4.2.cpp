#include<stdio.h>
#include<math.h>
#define max 1000
//nguyen mau ham
void nhapmang(int arr[], int &a);
void xuatmang(int arr[], int a);
int timkiem(int arr[], int a, int x);
void timkiemphantubang(int arr[], int a, int x);
int kiemtra(int arr[], int a, int x);
void xoaptu(int arr[], int &a, int k);
void chia2(int arr[], int a);
void capgiatri(int arr[], int a);
void lietkeptulonhonptusau(int arr[], int a);
void tachmang(int arr[], int a, int chan[], int le[], int &c, int &l);
void sapxeptangdan(int arr[], int a);

//ham main	
int main()
{
	int arr[max];
	int a;
	int chan[max], c;
	int le[max], l;

	printf("nhap so phan tu cua mang:");
	scanf_s("%d", &a);

	//Nhập giá trị cho các phần tử cho mảng
	nhapmang(arr, a);


	//Xuất các phần tử mảng
	printf("\n\nsau khi xuat mang:\t");
	xuatmang(arr, a);


	//Tìm và trả về vị trí đầu tiên của x trong mảng, nếu không có x trong mảng thì hàm trả về kết quả - 1
	int x;
	printf("\n\nnhap vao so can tim:");
	scanf_s("%d", &x);
	int idx = timkiem(arr, a, x);
	if (idx != -1) printf("vi tri dau tien cua phan tu %d la: arr[%d]", x, idx);
	else printf("\n\nso %d khong co trong mang", x);
	

	//Xác định có bao nhiêu phần tử bằng giá trị phần tử x trong mảng. Liệt kê những vị trí đó
	int dem = kiemtra(arr, a, x);
	printf("\n\nso luong phan tu bang voi gia tri x la: %d",dem);
	timkiemphantubang(arr, a, x);


	//Xoá một phần tử tại vị trí k
	int k;
	printf("\n\nnhap vi tri can xoa:");
	scanf_s("%d", &k);
	xoaptu(arr, a, k);
	printf("\nsau khi xoa phan tu :");
	xuatmang(arr, a);


	//Liệt kê những phần tử có dấu hiệu chia hết cho 2
	chia2(arr, a);


	//Liệt kê các cặp giá trị (x,y) trong mảng thỏa điều kiện x<=y
	printf("\n\ncac cap gia tri thoa man dkien :");
	capgiatri(arr, a);


	//Liệt kê những phần tử lớn hơn phần tử đứng liền sau
	printf("\n\nLIET KE NHUNG PHAN TU LON HON PHAN TU DUNG LIEN SAU");
	printf("\n\ncac phan tu thoa man dieu kien tren:");
	lietkeptulonhonptusau(arr, a);


	//Tách mảng vừa nhập thành 2 mảng: mảng B (chứa các phần tử là số chẵn) và mảng C(chứa các phần tử là số lẻ)
	printf("TACH MANG VUA NHAP THANH 2 MANG CHAN VA LE");
	 tachmang(arr, a, chan, le, c, l);
	 printf("\n\nmang B:");
	 xuatmang(chan, c);
	 printf("\n\nmang C:");
	 xuatmang(le, l);


	 //Sắp xếp mảng tăng dần
	 printf("\n\nSau khi sap xep:\n");
	 sapxeptangdan(arr, a);
	 xuatmang(arr, a);
	return 0;
}

//Nhập giá trị cho các phần tử cho mảng
void nhapmang(int arr[max], int& a)
{
	for (int i = 0; i < a;i++)
	{
		printf("arr[%d]:", i);
		scanf_s("%d", &arr[i]);

	}
}

//Xuất các phần tử mảng
void xuatmang(int arr[max], int a)
{
	for (int i = 0;i < a;i++)
	{
		printf("\narr[%d]:", i);
		printf("%d\n", arr[i]);
	}
}

//Tìm và trả về vị trí đầu tiên của x trong mảng, nếu không có x trong mảng thì hàm trả về kết quả - 1
int timkiem(int arr[],int a,int x)
{
	for (int i = 0;i < a;i++)
	{
		if (arr[i] == x) return i;
	}
	return -1;
}

//Xác định có bao nhiêu phần tử bằng giá trị phần tử x trong mảng. Liệt kê những vị trí đó
int kiemtra(int arr[], int a, int x)
{
	int dem = 0;
	for (int i = 0;i < a;i++)
	{
		if (arr[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
void timkiemphantubang(int arr[], int a, int x )
{
	
	printf("\nvi tri cua cac phan tu bang nhau la:");
	for (int i = 0;i < a;i++)
	{
		if (arr[i] == x)
		{
			
			printf("\tarr[%d]", i);
		}
	}
}

//Xoá một phần tử tại vị trí k
void xoaptu(int arr[], int &a, int k)
{
	if (k < 0 || k >= a) printf("\nnhap vi tri khong hop le");
	else
	{
		for (int i = k;i < a-1 ;i++)
		{
			arr[i] = arr[i + 1];
			
		}
		a--;
	}
}

//Liệt kê những phần tử có dấu hiệu chia hết cho 2
void chia2(int arr[], int a)
{
	int kiemtra = 0;
	printf("\n\ncac phan tu co dau hieu chia het cho 2 la:");
	for (int i = 0;i < a;i++)
	{
		if (arr[i] % 2 == 0|| arr[i]%4==0||arr[i]%6==0||arr[i]%8==0)
		{
			printf("\t%d", arr[i]);
			kiemtra = 1;
		}
	}
	if (kiemtra == 0) printf("\n\nkhong co phan tu nao chia het cho 2");
}
//Liệt kê các cặp giá trị (x,y) trong mảng thỏa điều kiện x<=y
void capgiatri(int arr[], int a)
{
	for (int i = 0;i < a;i++)
	{
		for (int j = i;j < a;j++)
		{
			if (arr[i] <= arr[j])
			{
				printf("\t(%d,%d)", arr[i], arr[j]);
			}
		}
	}
}
//Liệt kê những phần tử lớn hơn phần tử đứng liền sau
void lietkeptulonhonptusau(int arr[], int a)
{
	int kiemtra = 0;
	for (int i = 0;i < a-1;i++)
	{
		if (arr[i] > arr[i + 1])
		{
			printf("\t%d", arr[i]);
			kiemtra = 1;
		}
	}
	if (kiemtra == 0) printf("khong co so ");
}

//Tách mảng vừa nhập thành 2 mảng: mảng B (chứa các phần tử là số chẵn) và mảng C(chứa các phần tử là số lẻ)

void tachmang(int arr[],  int a,int chan[],int le[],int &c,int &l)
{
	int  c = 0;
	int  l = 0;
	
	for (int i = 0;i < a;i++)
	{
		if (arr[i] % 2 == 0)
		{
			chan[c] = arr[i];
			
			c++;
		}
		else
		{
			le[l] = arr[i];
			
			l++;
		}
	}
}

//Sắp xếp tăng dần
void sapxeptangdan(int arr[], int a)
{
	for (int i = 0;i < a-1;i++)
	{
		for (int j = i + 1;j < a;j++)
		{
			if (arr[i] > arr[j])
			{
				int tg = arr[i];
				arr[i] = arr[j];
				arr[j] = tg;
			}
		}
	}
}


