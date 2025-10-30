#include <iostream>

void task1(){
    int n;     //j,]zdkz. 
    std::cin >> n;
    int a, mas[n];
    std::cin >> a;
    int min = a;
    mas[0] = a;
    for(int i = 1; i < n; i++){
        std::cin >> a;
        mas[i] = a;         //заполнение массива
        if(min > a) min = a;
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        if (mas[i] == min) k++;
    }
    std::cout << k;
}

int main(){
    task1();
}

//1122