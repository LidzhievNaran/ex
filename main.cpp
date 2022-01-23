#include <iostream>
#include <vector>

int main() {
 int k;
 std::cout << "enter a fibonacci end" << std::endl;
 std::cin >> k;
 int sum = 1;
 int a = 1;
 int b = 0;
 int z;
 for (int i =0; i< k-1; i++){//k-1 тк sum уже принила значение первого элемента равного единице
     z = a;
     a = a+b;
     sum+=a;
     b = z;
 }
 std::cout << sum << std::endl;
}
