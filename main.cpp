#include <iostream>
#include <math.h>
int main() {
    double x;
    double y;
    std::cout << "enter x" << std::endl;
    std::cin>> x;
    std::cout << "enter y" << std::endl;
    std::cin>> y;
    double f;
    if (x<y){
        f = x-2*y+x*y;
    } else{
        if(x==y){
            f = sin(x)*x;
        } else{
            f = y-2*x+1;
        }
    }
    std::cout << f << std::endl;
}
