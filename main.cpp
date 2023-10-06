#include <iostream>
#include "hello.hpp"

//using namespace std;

int main(){
    using std::cout;
    cout << "Hello world!" << std::endl;

    sayHello();

    return 0;
}
