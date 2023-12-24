#include<stdio.h>
#include<iostream>
#define max 1000
struct hinhvuong
{
    float chieudaicanh,chuvi,dientich;
};

//nguyen mau ham
void nhap(hinhvuong &hv);
void nhapthongtin(hinhvuong hv[],int n);
void tinh_chuvi_dientich(hinhvuong hv[],int n);
void xuat(hinhvuong hv);
void xuatthongtin(hinhvuong hv[],int n);
float tinh_tong_chu_vi(hinhvuong hv[],int n);
float tinh_tbc_dtich(hinhvuong hv[],int n);

//ham main 
int main()
{
    hinhvuong hv[max];
    int n;
    printf("nhap so hinh vuong:");scanf("%d",&n);

    //nhap
    nhapthongtin(hv,n);
    //tinh chu vi va dien tich
    tinh_chuvi_dientich(hv,n);
    //xuat thong tin
    printf("\n\nSau khi xuat:");
    xuatthongtin(hv,n);
    //tong chu vi cua cac hinh vuong
    float cv=tinh_tong_chu_vi(hv,n);
    printf("\n\nTong chu vi cac hinh vuong la:%.3f",cv);
    //tinh tbc dien tich 
    float dt=tinh_tbc_dtich(hv,n);
    printf("\n\nTrung binh cong dien tich:%.3f",dt);
    system("pause");
    return 0;
}


void nhap(hinhvuong &hv)
{
    printf("\n\nnhap chieu dai canh:");scanf("%f",&hv.chieudaicanh);
}
void nhapthongtin(hinhvuong hv[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nhinh vuong thu %d",i);
        nhap(hv[i]);
    }
}
void tinh_chuvi_dientich(hinhvuong hv[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        hv[i].chuvi=4*hv[i].chieudaicanh;
        hv[i].dientich=hv[i].chieudaicanh*hv[i].chieudaicanh;
    }
}
void xuat(hinhvuong hv)
{
    printf("\nchieu dai canh:%.3f",hv.chieudaicanh);
    printf("\nchu vi hinh vuong:%.3f",hv.chuvi);
    printf("\ndien tich hinh vuong:%.3f",hv.dientich);
}
void xuatthongtin(hinhvuong hv[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nhinh vuong thu %d:",i);
        xuat(hv[i]);
    }
}
float tinh_tong_chu_vi(hinhvuong hv[],int n)
{
    float tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=hv[i].chuvi;
    }
    return tong;
}
float tinh_tbc_dtich(hinhvuong hv[],int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=hv[i].dientich;
    }
    float tbc=(float)tong/n;
    return tbc;
}