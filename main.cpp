#include <iostream>
#include <vector>
int summa(int arr[], int n){
    int sum =0;
    for (int i=0; i< n; i++){
        sum+= arr[i];
    }
    return sum;
}
int main() {
    setlocale(LC_ALL, "Russia");
    int n, m;
    std::cout << "введите количество строк матрицы" << std::endl;
    std::cin>> m;
    std::cout << "введите количество столбцов матрицы" <<std::endl;
    std::cin>> n;
    int arr[m][n];
    for (int i =0; i < m; i++){
        for (int j =0; j < n; j++){
            std::cout << "введите элемент ["<<i<<"] ["<<j<<"]"<< std::endl;
            std::cin>> arr[i][j];
        }
    }
    int z ;
    std::cout << "введите строку, которую хотите суммировать" << std::endl;
    std::cin>> z;
    int arr_f[n];
    for (int i =0; i<m;i++){
        arr_f[i] = arr[z][i];
    }
    std::cout<<"сумма строчки №"<< z << " = " << summa(arr_f, m) << std::endl;
}
