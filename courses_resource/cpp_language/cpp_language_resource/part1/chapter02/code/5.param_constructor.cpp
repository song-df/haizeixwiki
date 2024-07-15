/*************************************************************************
	> File Name: 5.param_constructor.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  7/ 5 19:43:19 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    A() : A(100, 1000) {}
    A(int x, int y) {
        this->x = x, this->y = y;
    }
    void output() {
        cout << "(" << this->x << ", " << this->y << ")" << endl;
    }
private:
    int x, y;
};

int main() {
    A a(10, 100), b(20, 23);
    a.output();
    b.output();
    A c;
    c.output();
    return 0;
}
