#include <iostream>
#include <math.h>
int main() {
    double x;
    double y;
    std::cout << "enter x"<< std::endl;
    std::cin >> x;
    std::cout << "enter y"<< std::endl;
    std::cin >> y;
    double h = sqrt(x*x + y*y);
    std::cout << h << std::endl;
    double r = 1;
    double x1 = (-2+sqrt(4-4*(1-y)))/2;
    double x2 = (-2-sqrt(4-4*(1-y)))/2;
    std::cout << x1 << std::endl;
    std::cout << x2 << std::endl;
    if ( x >= x2 && x<=x1 && h<r){
        std::cout << "the point belong to the shaded plane" << std::endl;
    } else{
        std::cout << "the point does not belong to the shaded plane" << std::endl;
    }
}
