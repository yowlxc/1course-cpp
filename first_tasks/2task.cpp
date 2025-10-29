#include <iostream> 
using namespace std;

int func(int n){
    int k = 2, fib1 = 1, fib2 = 1;
    while (1){
        k++;
        if (fib1 + fib2 == n) return k;
            else if (fib1 + fib2 > n) return -1;
        int tmp = fib1;
        fib1 = fib2;
        fib2 = fib2 + tmp;
    }
}

int main(){
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}


// Дано натуральное число
// A > 1. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число n, что φ.n=
// A. Если А
//  не является числом Фибоначчи, выведите число -1.
// Пример ввода:
// 8
// Пример вывода:
// 6