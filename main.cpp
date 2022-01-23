#include <iostream>
#include <vector>
int main() {
    int x =0;
    int x1 = -99;
    int x2 = -99;
    std::vector<int> arr;
    while (x<=0)
    {
        x = x1+x2+120;
        x2 = x1;
        x1 = x;
        arr.push_back(x);
    }
    int min = arr[0];
    for (int i =0; i< arr.size(); i++){
        if (arr[i] < min)
            min = arr[i];
        std::cout << arr[i] << std::endl;
    }
    std::cout << min << std::endl;
}
