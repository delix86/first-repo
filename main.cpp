#include <iostream>
#include "hello.hpp"
//using namespace std;

int main(){
    using std::cout;
    std::cout << "Hello world!" << std::endl;

    sayHello();

    return 0;
}
