#include<stdio.h>
#include<math.h>
#include<iostream>
#define PI 3.14
struct ellipse
{
    float x;
    float y;
    float r1;
    float r2;
    float dientich;
    float chuvi;
};
typedef struct ellipse eli;
//nguyen mau ham
void nhap(eli *el);
void xuat(eli *el);
void tinhchuvi_dientich(eli *el);
void kiemtra(eli *el);
//ham main
int main()
{
eli el;

nhap(&el);

//tinh chu vi , dien tich
tinhchuvi_dientich(&el);

//xuat
printf("\n\nSau khi xuat:\n");
xuat(&el);

//kiem tra
kiemtra(&el);
system("pause");
}


void nhap(eli *el)
{
    printf("nhap hoanh do x:");
    scanf("%f",&el->x);
    printf("\nnhap tung do y:");
    scanf("%f",&el->y);
    printf("\nnhap ban kinh thu nhat r1:");
    scanf("%f",&el->r1);
    printf("\nnhap ban kinh thu hai r2:");
    scanf("%f",&el->r2);
}

void tinhchuvi_dientich(eli *el)
{
   el-> chuvi=2* PI*sqrt((el->r1*el->r1+el->r2*el->r2)/2);
   el-> dientich=PI*el->r1*el->r2;
}

void xuat(eli *el)
{
    printf("\nthong tin hinh ellipse:\n");
    printf("x=%.3f",el->x);
    printf("\ny=%.3f",el->y);
    printf("\nr1=%.3f",el->r1);
    printf("\nr2=%.3f",el->r2);
    printf("\nchu vi:%.3f",el->chuvi);
    printf("\ndien tich:%.3f",el->dientich);
    
}
void kiemtra(eli *el)
{
    
    if(el->x==0 && el->y==0)
    {
        printf("\n\nhinh ellipse vua nhap co tam nam o goc toa do");
    }
    else{
        printf("\n\nhinh ellipse vua nhap co tam khong nam o goc toa do");
    }
}

