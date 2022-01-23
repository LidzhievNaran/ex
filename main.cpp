#include <iostream>
#include <cstdlib>
#include "ctime"
#include <vector>
int main() {
    int n;
    std::cout << "enter arr size"<< std::endl;
    std::cin >> n;
    std::vector<int> rand_arr(n);
    srand(time(NULL));
    for (int i =0; i < n; i++){
        rand_arr[i] = 1+rand()%99;
    }
    std::vector<int> arr;
    for (int i =0; i < n; i++){
        std::cout << rand_arr[i] << std::endl;
        if (rand_arr[i] % 3 == 0 && rand_arr[i] % 5 != 0){
            arr.push_back(rand_arr[i]);
        }
    }
    if (arr.empty()){
        std::cout <<" there no numbers divisible by 3 and no divisible by 5" << std::endl;
    }
    for (int i = 0; i< arr.size();i++){
        std::cout << arr[i] << std::endl;
    }

}
