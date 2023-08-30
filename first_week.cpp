#include <iostream>
using namespace std;
int main()
{
    string say;
    say="why";
    cout << say << endl;
    cout << 5.0 << '\n';
    cout << 6.7f << '\n';
    cout << 9876543.21 << '\n';

    char a = 65, b=66, c=67, mygrade ='B';
    cout << a << endl;
    cout << b;
    cout << c;
    cout << mygrade << endl;

    cout << "char type: " << sizeof(char) << endl;
    cout << "int type: " << sizeof(int) << endl;
    cout << "short type: " << sizeof(short) << endl;
    cout << "long type: " << sizeof(long) << endl;
    cout << "long long type: " << sizeof(long long) << endl; cout << "float type: " << sizeof(float) << endl;
    cout << "double type: " << sizeof(double) << endl;

    int iValue = 20;
    auto aValue1 = iValue;
    auto aValue2 = "hell";
    cout << typeid(aValue1).name() << endl; 
    cout << typeid(aValue2).name() << endl;

    int Num1=10, Num2(30.5);
    cout << Num1 << endl;
    cout << Num2 << ": information loss" << endl;
    // int Num3{30.5}; 중괄호 사용시 타입이 다르면 오류 표시;

    int x = 10; // integer x
    char y = 'a'; // character c
    // y implicitly converted to int. ASCII // value of 'a' is 97
    x = x + y;
    // x is implicitly converted to float
    float z = x + 1.0;
    cout << "x = " << x << endl; 
    cout << "y = " << y << endl; 
    cout << "z = " << z << endl;

    float f = 1.5;
    int i = 10;
    int h = i+f;
    cout << "h = " << h << " information loss" << endl;

    double x = 1.2;

    int sum = (int)x +1;
    cout << "sum : " << sum << endl;

    return 0;
}