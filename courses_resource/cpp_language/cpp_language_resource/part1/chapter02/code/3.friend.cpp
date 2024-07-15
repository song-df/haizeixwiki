/*************************************************************************
	> File Name: 3.friend.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 五  7/ 5 12:23:55 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class A {
public :
    void output() {
        cout << "Class A : " << x << ", " << y << endl;
    }
private:
    int x, y;
    friend int main();
    friend class B;
};

class B {
public :
    void change(A &a) {
        a.x = 100, a.y = 200;
        return ;
    }
};

void test(A &a) {
    //a.x = 3, a.y = 4;
    return ;
}

int main() {
    A a;
    test(a);
    a.x = 3, a.y = 4;
    a.output();

    B b;
    b.change(a);
    a.output();
    return 0;
}
