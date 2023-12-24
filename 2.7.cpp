#include <iostream>
using namespace std;
int main() {
    int tong = 0;
    int so;

    cout << "nhap 1 so nguyen , tinh tong cac so nguyen vua nhap tren 100 va in ra ket qua. " << endl;

    while (tong <= 100) 
    {
        cout << "nhap 1 so: ";
        cin >> so;
        tong += so;
    }

    cout << "tong cac so vua nhap la : " << tong << endl;

    return 0;
}
