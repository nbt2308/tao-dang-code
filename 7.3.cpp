#include<stdio.h>
#include<iostream>
#include<math.h>
struct diem
{
float x,y;
float kc;
};

//nguyen mau ham
void nhap(diem *d);
void xuat(diem *d);
float tinhkhoangcach(diem A,diem B);
void kiemtra(diem A,diem B);
void kiemtragoctoado(diem A,diem B);
//ham main
int main()
{
    diem A;
    diem B;
    printf("nhap toa do diem A:\n");
    nhap(&A);
    printf("\n\nnhap toa do diem B:\n");
    nhap(&B);

    //xuat
    printf("\n\nSau khi xuat:\n");
    printf("diem A:");
    xuat(&A);
    printf("\ndiem B:");
    xuat(&B);

    //tinh khoang cach AB
    float kq=tinhkhoangcach(A,B);
    printf("\n\nkhoang cach AB=%f",kq);

    //kiem tra co diem nao nam tren truc hoanh hay khong
    kiemtra(A,B);

    //kiem tra co diem nao nam o goc toa do hay khong
    kiemtragoctoado(A,B);
    system("pause");
}
void nhap(diem *d)
{
    printf("nhap hoanh do:"); scanf("%f",&d->x);
    printf("\nnhap tung do:"); scanf("%f",&d->y);
}
void xuat(diem *d)
{
    printf("(%.3f,%.3f)",d->x,d->y);
}
float tinhkhoangcach(diem A,diem B)
{
    float kc;
    kc=sqrt(((A.x-B.x)*(A.x-B.x))+((A.y-B.y)*(A.y-B.y)));
    return kc;
}
void kiemtra(diem A,diem B)
{
    if(A.y==0 && B.y==0)
    {
        printf("\n\ndiem A va B deu nam tren truc hoanh");
    }
    else if(B.y==0)
    {
        printf("\n\ndiem B nam tren truc hoanh");
    }
    else if(A.y==0)
    {
        printf("\n\ndiem A nam tren truc hoanh");
    }
    else
    {
        printf("\n\nkhong co diem nao nam tren truc hoanh");
    }
}
void kiemtragoctoado(diem A,diem B)
{
    if(A.x==0 && A.y==0)
    {
        printf("\n\ndiem A nam o goc toa do");
    }
    else if(B.x==0 && B.y==0)
    {
        printf("\n\ndiem B nam o goc toa do");
    }
    else
    {
        printf("\n\nkhong co diem nao nam o goc toa do");
    }
}