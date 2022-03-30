#include <iostream>
#include <string>

void log(const char* message);

int add(int& a,int b){
    int* p_a = &a;
    int* p_b = &b;
    return a;
}

int main()
{
    int a = 1;
    int& b = a;

    int* p_a = &a;
    int* p_b = &b;
    int c = add(a,b);
    int* p_c = &c;
    std::cout << *p_a << std::endl;
    
}