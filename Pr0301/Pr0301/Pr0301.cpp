#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    double x;
    // ������� ��������     
    double y;
    // ��������� ���������� ������     
    double A;  // �������� ��������� - ������������� ����� ������� ������     
    double B;  // �������� ��������� - ������������� ����� ������� ������  
    cout << "x = ";
    cin >> x;          
    A = 2+ 1./abs(1+x);
    // ����� 1: ������������ � ��������� ����     
    if (x<-1)         
    B = sqrt(abs(cos(x)+13));
    if (1<=x && x<=5)
        B =3+cos(4 + x / sqrt(2))/sin(4+x/sqrt(2)) ;
    if (x>5)
        B = 8+0.7*x;  
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    // ����� 2: ������������ � ����� ����     
    if (x < -1)
        B = sqrt(abs(cos(x) + 13));
    if (1 <= x && x <= 5)
        B = 3 + cos(4 + x / sqrt(2)) / sin(4 + x / sqrt(2));
    if (x > 5)
        B = 8 + 0.7 * x;
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}


