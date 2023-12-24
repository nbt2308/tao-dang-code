#include<stdio.h>
#include<string.h>
#define max 1000
struct xeganmay
{
    char bienso[max];
    char hangsanxuat[max];
    int namsx;
    long long giatien;

};
//nguyen mau ham
void nhap(xeganmay &xe);
void nhapmang(xeganmay xe[],int n);
void xuat(xeganmay xe);
void xuatmang(xeganmay xe[],int n);
void lietke_xesx(xeganmay xe[],int n); 
int soluong_hsx(xeganmay xe[],int n,char k[]);
int tongtien(xeganmay xe[],int n);
void hoanvi(xeganmay &xe1,xeganmay &xe2);
void sapxeptangdan_bienso(xeganmay xe[],int n);
//ham main
int main()
{
    xeganmay xe[max];
    int n;
    printf("nhap so luong xe:");
    scanf("%d",&n);
    //nhap
    nhapmang(xe,n);
    //xuat 
    printf("\n\nSau khi xuat:");
    xuatmang(xe,n);

    //liet ke thong tin nhung xe san xuat truoc nam 2010
    printf("\n\nNhung xe san xuat truoc nam 2010:\n");
    lietke_xesx(xe,n);

    //tim va tra ve so luong xe do hang k san xuat (k duoc nhap tu ban phim)
    char k[max];
    printf("\n\nnhap hang san xuat:");
    fflush(stdin);
    fgets(k,max,stdin);
    int sl=soluong_hsx(xe,n,k);
    printf("\n\nso luong xe do hang %s san xuat: %d",k,sl);

    //tinh tong gia tien cua cac xe trong dnah sach
    int kq=tongtien(xe,n);
    printf("\n\nTong tien cua cac xe la:%d",kq);

    //sap xep tang dan bien so xe
    sapxeptangdan_bienso(xe,n);
    xuatmang(xe,n);
    
    
    return 0;
}
void nhap(xeganmay &xe)
{
    printf("\nnhap bien so xe:");
    fflush(stdin);
    fgets(xe.bienso,max,stdin);
    printf("\nnhap hang san xuat:");
    fflush(stdin);
    fgets(xe.hangsanxuat,max,stdin);
    printf("\nnhap nam san xuat:");
    fflush(stdin);
    scanf("%d",&xe.namsx);
    printf("\nnhap gia tien:");
    fflush(stdin);
    scanf("%d",&xe.giatien);
    fflush(stdin);
}
void nhapmang(xeganmay xe[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nxe thu %d:",i);
        nhap(xe[i]);
    }
}
void xuat(xeganmay xe)
{
    printf("\nbien so:%s",xe.bienso);
    printf("hang san xuat:%s",xe.hangsanxuat);
    printf("nam san xuat:%d",xe.namsx);
    printf("\ngia tien:%d",xe.giatien);
}
void xuatmang(xeganmay xe[],int n)
{
    for(int i=0;i<n;i++)
    {
        
        printf("\nxe thu %d:",i);
        xuat(xe[i]);
    }
}
void lietke_xesx(xeganmay xe[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(xe[i].namsx<2010)
        {
            printf("\nxe thu %d:",i);
            xuat(xe[i]);
        }
    }
} 
int soluong_hsx(xeganmay xe[],int n,char k[])
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        int d=strcmp(xe[i].hangsanxuat,k);
        if(d==0) //tra ve 0 neu 2 gia tri bang nhau
        {
            dem++;
        }
    }
    return dem;
}
int tongtien(xeganmay xe[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        k+=xe[i].giatien;
    }
    return k;
}
void hoanvi(xeganmay &xe1,xeganmay &xe2)
{
    xeganmay tg=xe1;
    xe1=xe2;
    xe2=tg;
}
void sapxeptangdan_bienso(xeganmay xe[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int d=strcmp(xe[i].bienso,xe[j].bienso);
            if(d>0) //neu d>0 thi chuoi thu nhat > chuoi thu hai
            {
                hoanvi(xe[i],xe[j]);
            }
        }
    }
}