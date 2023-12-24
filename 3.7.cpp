#include<iostream>
using namespace std;
//CÁCH 1
int ucln1(int a, int b)
{
    if (a==0 || b == 0) return a+b;
    else return ucln1(b, a % b);   
}



//CÁCH 2
int ucln(int a, int b)
{
    if (a == 0 || b == 0) return a+b;
    else
    {
        while (a != b)
        {
            if (a > b) a -= b;
            else b -= a;
        }
        return a; //trả về a hoặc b vì tới đây a=b (*)
    }

}
//CÁCH 3 (của ông thầy)
int ucln2(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a; //(*)
}

int main()
{
    int a, b;
    cout << "nhap so nguyen thu nhat: ";
    cin >> a;
    cout << "nhap so nguyen thu hai: ";
    cin >> b;
    cout << "ucln(" << a << "," << b << ")" << " " << "la" << " " << ucln2(a, b);   //chỗ này muốn cách 1 hay 2 thì sửa tên hàm lại
    return 0;
}