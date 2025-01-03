/*************************************************************************
	> File Name: 9.const_cast.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五 12/27 21:05:06 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : x(11), y(22) {}
    void output() const {
        cout << "x = " << x << ", y = " << y << endl;
        return ;
    }
    int x, y;
};

void test1() {
    const int x = 123;
    const int *p1 = &x;
    int *p2 = const_cast<int *>(p1);
    cout << *p1 << endl;
    *p2 = 456;
    cout << *p1 << endl;
    return ;
}

void test2() {
    const A a;
    A &a2 = const_cast<A&>(a);
    a.output(); // x = 11, y = 22
    a2.x = 33;
    a.output(); // x = 33, y = 22
    
    const A *p1 = &a;
    A *p2 = const_cast<A *>(p1);
    p1->output(); // x = 33, y = 22
    p2->y = 44;
    p1->output(); // x = 33, y = 44
    return ;
}

int main() {
    test1();
    test2();
    return 0;
}
