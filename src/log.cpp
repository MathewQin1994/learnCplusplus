#include <iostream>

void log(const char* message){
    std::cout << message << std::endl;
}

int main()
{
    int a = 1;
    int& b = a;
    std::cout << a+1 << std::endl;
    
}