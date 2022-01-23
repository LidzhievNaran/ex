#include <iostream>
#include <vector>
int main() {
    double h;
    double m;
    std::cout << "enter h" << std::endl;
    std::cin>>h;
    std::cout << "enter m" << std::endl;
    std::cin>>m;
    if (h > m){
        std::cerr << "h must be less than m";
        return 0;
    }
    double n =0;
    int k =0;
    double i = 1;
    while (m>n){
        n = ((2*i-1)*2)/i;
        std::cout << n << std::endl;
        if (n>=h && n <= m){
            k++;
        }
        i++;
    }

    std::cout << k << std::endl;
}
