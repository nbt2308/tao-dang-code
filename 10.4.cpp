// bai 10.4
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
void In(SinhVien sv);
void InMang(SinhVien svs[],int n);
int SoPhanTu(FILE *f);
void DocNoiDung(SinhVien svs[],int n, FILE *f);
// ham main
int main()
{
	SinhVien *sv;
	int n;
	FILE *f;
	char str[64];
	printf(" Ten tap tin : ");fflush(stdin);gets(str);
	f=fopen(str,"rb");
	if(f!=NULL)
	{
		n=SoPhanTu(f);
		sv=(SinhVien*)calloc(n,sizeof(SinhVien));
		DocNoiDung(sv,n,f);
		printf(" Doc noi dung tap tin :\n");
		InMang(sv,n);
		fclose(f);
	}
	return 0;
}
// Ham in
void In(SinhVien sv)
{
	printf("%s\t %s\t %d\t %.2f\n",sv.MS,sv.Ten,sv.Tuoi,sv.DiemTB);
}
// Ham in n sinh vien
void InMang(SinhVien svs[],int n)
{
	for(int i=0;i<n;i++)
	{
		In(svs[i]);
	}
}
// Lay so phan tu
int SoPhanTu(FILE *f)
{
	int n;
	fread(&n,sizeof(int),1,f);
	return n;
}
// Ham doc noi dung
void DocNoiDung(SinhVien svs[],int n, FILE *f)
{
	fread(svs,sizeof(SinhVien),n,f);
}

