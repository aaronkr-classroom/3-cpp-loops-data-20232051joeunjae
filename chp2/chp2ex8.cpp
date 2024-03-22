//chp2 ex8

#include <iostream>
#include <string>

int main() {
    int i, sum=1;
    for (i = 1; i < 10; i++) { 
        sum *= i;
        std::cout << "°ö =" << sum << std::endl;
    }
    return 0;
}