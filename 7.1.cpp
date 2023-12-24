#include<stdio.h>
#include<iostream>
struct phanso
{
    int tuso;
    int mauso;
};
//nguyen mau ham
void nhapphanso(phanso *ps);
void xuatphanso(phanso *ps);
void chuanhoa(phanso *ps);
int ucln(int a,int b);
void rutgonphanso(phanso *ps);
phanso tinhtong(phanso ps1,phanso ps2);
phanso tinhhieu(phanso ps1,phanso ps2);
phanso tinhtich(phanso ps1, phanso ps2);
phanso tinhthuong(phanso ps1,phanso ps2);
int main()
{
    phanso ps1;
    phanso ps2;
    phanso ketqua;
    printf("nhap phan so thu nhat:\n");
    nhapphanso(&ps1);
    printf("\nnhap phan so thu hai:\n");
    nhapphanso(&ps2);

    //xuat phan so
    printf("\n\nSau khi xuat phan so:\n");
    printf("\n\nphan so thu nhat:");
    xuatphanso(&ps1);
    printf("\n\nphan so thu hai:");
    xuatphanso(&ps2);

    //chuan hoa 
    printf("\n\nSau khi chuan hoa:\n");
    printf("\nphan so thu nhat:");
    chuanhoa(&ps1);
    xuatphanso(&ps1);
    printf("\nphan so thu hai:");
    chuanhoa(&ps2);
    xuatphanso(&ps2);

    //rut gon phan so
    printf("\n\nSau khi rut gon:\n");
    printf("\nphan so thu nhat:");
    rutgonphanso(&ps1);
    xuatphanso(&ps1);
    printf("\nphan so thu hai:");
    rutgonphanso(&ps2);
    xuatphanso(&ps2);

    //tinh tong 2 phan so
    ketqua=tinhtong(ps1,ps2);
    printf("\n\ntong 2 phan so la:");
    xuatphanso(&ketqua);

    //tinh hieu 2 phan so
    ketqua=tinhhieu(ps1,ps2);
    printf("\n\nhieu 2 phan so la:");
    xuatphanso(&ketqua);
    
    //tinh thuong 2 phan so
    ketqua=tinhtich(ps1,ps2);
    printf("\n\ntich 2 phan so la:");
    xuatphanso(&ketqua);

    //tinh thuong 2 phan so
    ketqua=tinhthuong(ps1,ps2);
    printf("\n\nthuong 2 phan so la:");
    xuatphanso(&ketqua);

    system("pause");

}
void nhapphanso(phanso *ps)
{
    printf("nhap tu so:");
    scanf("%d",&ps->tuso);

    do
    {
        printf("\nnhap mau so:");
        scanf("%d",&ps->mauso);
    }while(ps->mauso==0);

}
void xuatphanso(phanso *ps)
{
    printf("%d/%d",ps->tuso,ps->mauso);
}


//chuan hoa phan so
void chuanhoa(phanso *ps)
{
    if(ps->mauso<0)
    {
        ps->tuso= -ps->tuso;
        ps->mauso= -ps->mauso;
    }
}


//rut gon phan so
int ucln(int a,int b)
{
    while(b!=0)
    {
       int t=a%b;
       a=b;
       b=t;
    }
    return a;
}

void rutgonphanso(phanso *ps)
{
    int uc= ucln(ps->tuso,ps->mauso);
    ps->tuso/=uc;
    ps->mauso/=uc;
}

//tinh tong 2 phan so
phanso tinhtong(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso=ps1.tuso * ps2.mauso + ps2.tuso *ps1.mauso ;
    ketqua.mauso=ps1.mauso * ps2.mauso;
    rutgonphanso(&ketqua);
    return ketqua;
}
phanso tinhhieu(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso=ps1.tuso * ps2.mauso - ps2.tuso *ps1.mauso ;
    ketqua.mauso= ps1.mauso *ps2.mauso;
    rutgonphanso(&ketqua);
    return ketqua;
}
phanso tinhtich(phanso ps1, phanso ps2)
{
    phanso ketqua;
    ketqua.tuso=ps1.tuso*ps2.tuso;
    ketqua.mauso=ps1.mauso*ps2.mauso;
    rutgonphanso(&ketqua);
    return ketqua;
}
phanso tinhthuong(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso=ps1.tuso*ps2.mauso ;
    ketqua.mauso=ps1.mauso*ps2.tuso;
    rutgonphanso(&ketqua);
    return ketqua;
}