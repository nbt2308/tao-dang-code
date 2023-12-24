// Bai 10.3
#include<stdio.h>
#include<stdlib.h>
struct SinhVien
{
	char MS[10];
	char Ten[20];
	int Tuoi;
	float DiemTB;
};
// nguyen mau ham
void Nhap(SinhVien *sv);
void NhapMang(SinhVien svs[],int n);
void GhiNoiDung(SinhVien svs[],int n, FILE *f);
// ham main
int main()
{
	SinhVien *sv;
	int n;
	FILE *f;
	char str[64];
	printf(" so phan tu : ");scanf("%d",&n);
	sv=(SinhVien*)calloc(n,sizeof(SinhVien));
	NhapMang(sv,n);
	printf(" Ten tap tin : ");fflush(stdin);gets(str);
	f=fopen(str,"wb");
	if(f!=NULL)
	{
		GhiNoiDung(sv,n,f);
		printf(" Ghi xong noi dung tap tin \n");
		fclose(f);
	}
	return 0;
}
// Ham Nhap
void Nhap(SinhVien *sv)
{
	printf(" MS : "); fflush(stdin) ;gets(sv->MS);
	printf(" Ten : "); fflush(stdin) ;gets(sv->Ten);
	printf(" Tuoi : "); fflush(stdin) ;scanf("%d",&sv->Tuoi);
	printf(" Diem : "); fflush(stdin) ;scanf("%f",&sv->DiemTB);
}
// Ham nhap n sinh vien
void NhapMang(SinhVien svs[],int n)
{
	for(int i=0;i<n;i++)
	{
		Nhap(&svs[i]);
	}
}
// Ham ghi thong tin vao tap tin
void GhiNoiDung(SinhVien svs[],int n, FILE *f)
{
	fwrite(&n,sizeof(n),1,f);
	fwrite(svs,sizeof(SinhVien),n,f);
}



