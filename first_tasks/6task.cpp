
// На ввод подаются N целых чисел, их нужно сохранить в массив или список. Затем вывести максимальный элемент. Пример ввода:
// 5
// 2
// 3
// 56
// 45
// 21
// Пример вывода:
// 56

#include <iostream>

int main(){
    int n, ch;
    std::cin >> n;
    int mas[n];
    for(int i = 0; i < n; i++){           
        std::cin >> ch;
        mas[i] = ch;
    }

    int max = mas[0];
    for(int i = 0; i < n; i++){
        if(mas[i] >= max) max = mas[i];
    }     
    std::cout << max;
    return 0;
}