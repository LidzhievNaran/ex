#include <iostream>
#include <math.h>

int main() {
    double k = pow(10, -4);
    std::cout << k << std::endl;
    double sum = 0;
    double i = 1;
    double x = i;
    while(x>k){
        x =(1/(i*(i+1)));
        sum += x;
        i++;
    }
    std::cout << i << std::endl;
    std::cout << sum << std::endl;

}
