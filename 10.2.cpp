#include<stdio.h>
#define max 1000
int main()
{
    FILE*f;
    int n=0;
    int arr[max];
    f=fopen("dulieu.txt","rt");
    if(f!=NULL)
    {
        while(!feof(f))
        {
            fscanf(f,"%d ",&arr[n]);
            n++;
        }
        fclose(f);
    }
    //xuat ra man hinh
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //loc so chan vao file ketqua.txt
    f=fopen("ketqua.txt","wt");
    if(f!=NULL)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                fprintf(f,"%d ",arr[i]);
            }
        }
        fprintf(f,"\n");
        //tinh tong cac ptu va ghi vao file ketqua.txt
        int tong=0;
        for(int i=0;i<n;i++)
        {
            tong+=arr[i];
        }
        fprintf(f,"%d ",tong);
        fprintf(f,"\n");
        //sap xep tang cac ptu va ghi ket qua vao file ketqua.txt
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
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        fclose(f);
    }
    
    return 0;
}
