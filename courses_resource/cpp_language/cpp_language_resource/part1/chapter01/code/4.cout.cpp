/*************************************************************************
	> File Name: 4.cout.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  4/19 23:59:17 2024
 ************************************************************************/

#include <iostream> // input output stream
#include <iomanip>
using namespace std;

int main() {
    int a = 123;
    cout << "hello world" << endl;
    cout << a << endl;
    cout << "a = " << a << endl;
    
    double b = 12.345;
    cout << b << endl;
    printf("%%lf = %lf\n", b);
    printf("%%g = %g\n", b);
    cout << setprecision(4) << b << endl;
    cout << fixed << setprecision(1) << b << endl;
    return 0;
}
