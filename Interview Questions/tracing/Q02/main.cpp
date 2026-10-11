#include <iostream>
class A { public: void display() { std::cout << "Class A\n"; } };
class B : public A {};
class C : public A {};
class D : public B, public C {};
int main() { D obj; obj.display(); }