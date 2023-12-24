#include<stdio.h>
#include<iostream>
#define max 1000
struct hinhchunhat
{
    float chieudai,chieurong,chuvi,dientich;
};

//nguyen mau ham
void nhap(hinhchunhat &hcn);
void nhapthongtin(hinhchunhat hcn[],int n);
void tinh_chuvi_dientich(hinhchunhat hcn[],int n);
void xuat(hinhchunhat hcn);
void xuatthongtin(hinhchunhat hcn[],int n);
void lietke_dtich_bang_chuvi(hinhchunhat hcn[],int n);
void sapxeptang(hinhchunhat hcn[],int n);

//ham main
int main()
{
    hinhchunhat hcn[max];
    int n;
    printf("nhap so luong hinh chu nhat:");scanf("%d",&n);

    //nhap
    nhapthongtin(hcn,n);
    //tinh chu vi va dien tich
    tinh_chuvi_dientich(hcn,n);
    //xuat
    printf("\n\nSau khi xuat:");
    xuatthongtin(hcn,n);
    //liet ke nhun hinh chu nhat co chu vi bang dien tich
    lietke_dtich_bang_chuvi(hcn,n);
    //sap xep tang theo dien tich
    printf("\n\nSau khi sap xep:");
    sapxeptang(hcn,n);
    xuatthongtin(hcn,n);
    system("pause");
    return 0;

}
void nhap(hinhchunhat &hcn)
{
    printf("\nchieu dai hcn:");
    scanf("%f",&hcn.chieudai);
    printf("\nnhap chieu rong:");
    scanf("%f",&hcn.chieurong);
}
void nhapthongtin(hinhchunhat hcn[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nhinh chu nhat thu %d:",i);
        nhap(hcn[i]);
    }
}
void tinh_chuvi_dientich(hinhchunhat hcn[],int n)
{
    for(int i=0;i<n;i++)
    {
        hcn[i].chuvi=(hcn[i].chieudai + hcn[i].chieurong)*2;

        hcn[i].dientich=hcn[i].chieudai * hcn[i].chieurong;
    }
}
void xuat(hinhchunhat hcn)
{
    printf("\nchieu dai:%.3f",hcn.chieudai);
    printf("\nchieu rong:%.3f",hcn.chieurong);
    printf("\nchu vi hcn:%.3f",hcn.chuvi);
    printf("\ndien tich hcn:%.3f",hcn.dientich);
}
void xuatthongtin(hinhchunhat hcn[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nhinh chu nhat thu %d:",i);
        xuat(hcn[i]);
    }
}
void lietke_dtich_bang_chuvi(hinhchunhat hcn[],int n)
{
    printf("\n\nNhung hinh chu nhat co dien tich=chu vi la:");
    for(int i=0;i<n;i++)
    {
        if(hcn[i].dientich==hcn[i].chuvi)
        {
            printf("\n\nHCN thu %d",i);
            xuat(hcn[i]);
        }
    }
}
void sapxeptang(hinhchunhat hcn[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(hcn[i].dientich>hcn[j].dientich)
            {
                hinhchunhat tg=hcn[i];
                hcn[i]=hcn[j];
                hcn[j]=tg;
            }
        }
    }
}