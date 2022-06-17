#include <iostream>
class A{
public:
int a;
};
class B: public A{
public:
int b;
};
int main(){
A obj_a;
B obj_b;
obj_b.a = 12;
obj_a.a = 10;
obj_b.b = 5;
std::cout<<"a from A: "<< obj_a.a<<std::endl;
std::cout<<"a from B: "<< obj_b.a<<std::endl;
std::cout<<"b from B: "<< obj_b.b<<std::endl;
return 0;
}

