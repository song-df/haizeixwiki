/*************************************************************************
	> File Name: 11.deep_copy.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  7/ 6 17:37:44 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Array {
public :
    Array() : n(10), data(new int[n]) {
        for (int i = 0; i < n; i++) data[i] = 0;
    }
    Array(const Array &a) : n(a.n), data(new int[n]) {
        for (int i = 0; i < a.n; i++) {
            data[i] = a.data[i];
        }
    }
    void set(int ind, int val) { data[ind] = val; }
    int size() { return n; }
    void output() {
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        return ;
    }
    
private:
    int n, *data;
};

int main() {
    Array a, b = a;
    for (int i = 0; i < a.size(); i++) {
        a.set(i, 1);
    }
    for (int i = 0; i < b.size(); i++) {
        b.set(i, i);
    }
    a.output();
    b.output();
    a.set(5, 1001);
    a.output();
    b.output();
    return 0;
}
