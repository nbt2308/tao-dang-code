#include<stdio.h>
#define max 1000
struct phanso
{
    int tuso,mauso;

};

//nguyen mau ham
void nhap(phanso &ps);
void nhapmang(phanso ps[],int n);
void xuat(phanso ps);
void xuatmang(phanso ps[],int n);
void chuanhoa(phanso ps[],int n);
int ucln(int a,int b);
void rutgonps(phanso &ps);
void rutgon(phanso ps[],int n);
phanso tong(phanso ps1,phanso ps2);
phanso tongmang(phanso ps[],int n);
float giatrips(phanso ps);
phanso min(phanso ps[],int n);
void hoanvi(phanso &a,phanso &b);
void sapxep(phanso ps[],int n);

//ham main
int main()
{
    phanso ps[max];
    int n;
    printf("nhap so phan tu:");
    scanf("%d",&n);

    //nhap va xuat mang
    nhapmang(ps,n);
    printf("\n\nSau khi xuat:");
    xuatmang(ps,n);

    //chuan hoa phan so
    chuanhoa(ps,n);
    printf("\n\nSau khi chuan hoa:");
    xuatmang(ps,n);

    //rut gon phan so
    rutgon(ps,n);
    printf("\n\nSau khi rut gon:");
    xuatmang(ps,n);

    //tinh tong
    phanso kq=tongmang(ps,n);
    printf("\n\nSau khi tinh tong:");
    xuat(kq);

    //tim min
    printf("\n\nGia tri nho nhat trong mang la:");
    phanso m=min(ps,n);
    xuat(m);
    
    //sap xep tang dan
    printf("\n\nSau khi sap xep:");
    sapxep(ps,n);
    xuatmang(ps,n);

    
    return 0;
}

//nhap
void nhap(phanso &ps)
{
    printf("\nnhap tu so:");
    scanf("%d",&ps.tuso);
    do
    {
    printf("\nnhap mau so:");
    scanf("%d",&ps.mauso);
    } while (ps.mauso==0);
}
void nhapmang(phanso ps[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nphan so thu %d",i);
        nhap(ps[i]);
    }
    
}
//xuat
void xuat(phanso ps)
{
    printf("\t%d/%d",ps.tuso,ps.mauso);
}
void xuatmang(phanso ps[],int n)
{
    for(int i=0;i<n;i++)
    {
        xuat(ps[i]);
    }
}

//chuan hoa
void chuanhoa(phanso ps[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(ps[i].mauso<0)
        {
            ps[i].tuso=-ps[i].tuso;
            ps[i].mauso=-ps[i].mauso;
        }
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
void rutgonps(phanso &ps)
{
    int uc=ucln(ps.tuso,ps.mauso);
    ps.tuso/=uc;
    ps.mauso/=uc;
}
void rutgon(phanso ps[],int n)
{
    for(int i=0;i<n;i++)
    {
        rutgonps(ps[i]);
    }
}

//tinh tong
phanso tong(phanso ps1,phanso ps2)
{
    phanso ketqua;
    ketqua.tuso=(ps1.tuso*ps2.mauso)+(ps2.tuso*ps1.mauso);
    ketqua.mauso=ps1.mauso*ps2.mauso;
    return ketqua;
}
phanso tongmang(phanso ps[],int n)
{
    phanso pst;
    pst.tuso=0;
    pst.mauso=1;
    for(int i=0;i<n;i++)
    {
        pst=tong(pst,ps[i]);
    }
    rutgonps(pst);
    return pst;
}

//tim min
float giatrips(phanso ps)
{
    float kq=(float)ps.tuso/ps.mauso;
    return kq;
}
phanso min(phanso ps[],int n)
{
    int k=0;
    float m=giatrips(ps[k]);
    for(int i=1;i<n;i++)
    {
        float t=giatrips(ps[i]);
        if(m>t)
        {
            m=t;
            k=i;
        }
    }
    return ps[k];
}

//sap xep tang dan
void hoanvi(phanso &a,phanso &b)
{
    phanso t=a;
    a=b;
    b=t;
}
void sapxep(phanso ps[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            float p1=giatrips(ps[i]);
            float p2=giatrips(ps[j]);
            if(p1>p2)
            {
                hoanvi(ps[i],ps[j]);
            }
        }
    }
}
