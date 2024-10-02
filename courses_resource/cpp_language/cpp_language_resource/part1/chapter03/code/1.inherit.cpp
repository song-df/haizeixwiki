/*************************************************************************
	> File Name: 1.inherit.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 四  9/19 19:51:38 2024
 ************************************************************************/

#include <iostream>
using namespace std;

class Animal {
public :
    Animal() = delete;
    Animal(string name) : name(name) {}
    void say() {
        cout << "My name is " << name << endl;
        return ;
    }

protected:
    string name;
};

class Cat : public Animal {
public :
    Cat(string name) : Animal(name) {}
    void run() {
        cout << "I can run with four legs" << endl;
        return ;
    }
};
class Dog : public Animal {
public :
    Dog(string name) : Animal(name) {}
    void run() {
        cout << "I can run with four legs" << endl;
        return ;
    }
};
class Bat : public Animal {
public :
    Bat(string name) : Animal(name) {} 
    void fly() {
        cout << "I can fly, I am " << this->name << endl;
        return ;
    }
};

int main() {
    Cat a1("Garfield");
    Dog a2("Odie");
    Bat a3("Dracula");
    a1.say();
    a1.run();
    a2.say();
    a2.run();
    a3.say();
    a3.fly();
    return 0;
}
