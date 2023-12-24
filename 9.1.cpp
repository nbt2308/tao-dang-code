#include<stdio.h>
#include<string.h>
#include<iostream>
#define max 100
struct nhanvien
{
    char msnv[max];
    char hoten_nv[max];
    int sosanpham;
    char xeploai[max];
    int luong;
};

//nguyen mau ham
void nhap(nhanvien &nv);
void nhapthongtin(nhanvien nv[],int n);
void xeploai_nv(nhanvien nv[],int n);
void luong_nv(nhanvien nv[],int n);
void xuat(nhanvien nv);
void xuatthongtin(nhanvien nv[],int n);
void lietke_xeploai(nhanvien nv[],int n);
float trungbinhcong(nhanvien nv[],int n);
void timnhanvien(nhanvien nv[],int n,char htnvct[]);
int soluong(nhanvien nv[],int n,int slspct);
void sapxep(nhanvien nv[],int n);
//ham main
int main()
{
    nhanvien nv[max];
    char htnvct[max];
    int slspct;
    int n;
    printf("nhap so luong nhan vien:");
    scanf("%d",&n);

    //nhap
    nhapthongtin(nv,n);
    //xep loai
    xeploai_nv(nv,n);
    //tinh luong nvien
    luong_nv(nv,n);
    //xuat thong tin
    printf("\n\nThong tin cua nhan vien:");
    xuatthongtin(nv,n);
    //liet ke thong tin theo xep loai
    printf("\n\nNhung nhan vien xp loai xuat sac:");
    lietke_xeploai(nv,n);
    //tinh trung binh cong luong nhan vien
    float tbc=trungbinhcong(nv,n);
    printf("\n\nTrung binh cong luong nhan vien la: %.3f",tbc);
    //tim nhan vien theo ten
    printf("\n\n\nNHAP TEN CAN TIM:");
    fflush(stdin);
    fgets(htnvct,max,stdin);
    timnhanvien(nv,n,htnvct);
    //so luong nhan vien theo so san pham
    printf("\n\n\nNHAP SO SAN PHAM MUON KIEM TRA:");
    scanf("%d",&slspct);
    int sl=soluong(nv,n,slspct);
    printf("\n\nSo luong nhan vien co so san pham tu %d tro len la:%d",slspct,sl);
    //sap xep tang dan theo ten nhan vien
    printf("\n\n\nSau khi sap xep:\n");
    sapxep(nv,n);
    xuatthongtin(nv,n);
    system("pause");
    return 0;
}

//nhap thong tin
void nhap(nhanvien &nv)
{
    printf("\nnhap ma so nhan vien:");
    fflush(stdin);
    fgets(nv.msnv,max,stdin);
    printf("\nnhap ho ten nhan vien:");
    fflush(stdin);
    fgets(nv.hoten_nv,max,stdin);
    printf("\nnhap so san pham:");
    fflush(stdin);
    scanf("%d",&nv.sosanpham);
}
void nhapthongtin(nhanvien nv[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nnhan vien thu %d",i);
        nhap(nv[i]);
    }
}

//xep loai nhan vien theo so luong san pham
void xeploai_nv(nhanvien nv[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(nv[i].sosanpham>=100)
        {
            strcpy(nv[i].xeploai,"Xuat sac");
        }
        else if(nv[i].sosanpham>=80)
        {
            strcpy(nv[i].xeploai,"Tot");
        }
        else if(nv[i].sosanpham>=60)
        {
            strcpy(nv[i].xeploai,"Dat");
        }
        else
        {
            strcpy(nv[i].xeploai,"Khong dat");
        }
    }
}

//tinh luong nhan vien
void luong_nv(nhanvien nv[],int n)
{
    for(int i=0;i<n;i++)
    {
        nv[i].luong=nv[i].sosanpham*10000;
    }
}

//xuat thong tin
void xuat(nhanvien nv)
{
    printf("\nMa so nhan vien:%s",nv.msnv);
    printf("Ho va ten nhan vien:%s",nv.hoten_nv);
    printf("So san pham:%d",nv.sosanpham);
    printf("\nxep loai cua nhan vien:%s",nv.xeploai);
    printf("\nLuong cua nhan vien:%d",nv.luong);
}
void xuatthongtin(nhanvien nv[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nNhan vien thu %d:",i);
        xuat(nv[i]);
    }
}

//liet ke nhung nhan vien xep loai xuat sac
void lietke_xeploai(nhanvien nv[],int n)
{
    for(int i=0;i<n;i++)
    {
        int ss=strcmp(nv[i].xeploai,"Xuat sac");
        if(ss==0)
        {
            xuat(nv[i]);
        }
    }
}

//tinh trung binh cong luong nhan vien
float trungbinhcong(nhanvien nv[],int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=nv[i].luong;
    }
    float tbc=(float)tong/n;
    return tbc;
}

//tim nhan vien theo ho ten duoc nhap tu ban phim
void timnhanvien(nhanvien nv[],int n,char htnvct[])
{
    int ss;
    for(int i=0;i<n;i++)
    {
         ss=strcmp(nv[i].hoten_nv,htnvct);
        if(ss==0)
        {
            printf("\n\nThong tin nhan vien can tim:");
            xuat(nv[i]);
        }
    }
    if(ss>0)
    {
        printf("\n\nkhong co nhan vien can tim");
    }
}

//tim va tra ve so luong nhan vien theo so san pham
int soluong(nhanvien nv[],int n,int slspct)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(nv[i].sosanpham>=slspct)
        {
            dem++;
        }
    }
    return dem;
}

//sap xep tang dan theo ten nhan vien
void sapxep(nhanvien nv[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int ss=strcmp(nv[i].hoten_nv,nv[j].hoten_nv);
            if(ss>0)
            {
                nhanvien tg=nv[i];
                nv[i]=nv[j];
                nv[j]=tg;
            }
        }
    }
}

