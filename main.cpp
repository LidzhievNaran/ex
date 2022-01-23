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
    double r = 1;
    if (x<=0 && x>=-1 && h < r){
        std::cout << "the point belong to the shaded plane" << std::endl;
    } else{
        std::cout << "the point does not belong to the shaded plane" << std::endl;
    }
}
