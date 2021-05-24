#include <iostream>

class A {
public:
    int foo() {
        return 1;
    }
};
 
class B : public A {};
 
class C : public A {};
 
class D : public B, public C {};

int main () {
    D d;
    std::cout << d.foo();
    return 0;
}
