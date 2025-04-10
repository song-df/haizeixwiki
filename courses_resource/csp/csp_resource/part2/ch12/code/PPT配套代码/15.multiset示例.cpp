#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
