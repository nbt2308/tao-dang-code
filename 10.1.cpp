#include<stdio.h>
#define max 1000
int main()
{
    FILE*f;
    int n;
    int arr[max];
    printf("nhap so phan tu:");scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\narr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    //ghi
    f=fopen("dulieu.txt","wt");
    if(f==NULL)
    {
        printf("\nKhong mo duoc tap tin");
    }
    if(f!=NULL)
    {
        for(int i=0;i<n;i++)
        {
            fprintf(f,"%d ", arr[i]);
        }
        fprintf(f,"\n");

        //tinh tong cac phan tu trong tap tin
        int tong=0;
        for(int i=0;i<n;i++)
        {
            tong+=arr[i];
        }
        fprintf(f,"%d ",tong);
        fprintf(f,"\n");

        //tim max
        int m=arr[0];
        for(int i=1;i<n;i++)
        {
            if(m<arr[i])
            {
                m=arr[i];
            }
        }
        fprintf(f,"%d ",m);
        fprintf(f,"\n");
        fclose(f);
    }

    //xuat
    f=fopen("dulieu.txt","rt");
    if(f!=NULL)
    {
        while(!feof(f))
        {
            int temp=0;
            fscanf(f,"%d ",&temp);
            printf("%d ",temp);
        }
        fclose(f);
    }

    //sap xep
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int tg=arr[i];
                arr[i]=arr[j];
                arr[j]=tg;
            }
        }
    }
    //ghi bo sung
    f=fopen("dulieu.txt","at");
    if(f!=NULL)
    {
        for(int i=0;i<n;i++)
        {
            fprintf(f,"%d ", arr[i]);
        }
        fclose(f);
    }
   
    return 0;
}
