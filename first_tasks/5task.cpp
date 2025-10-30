#include <iostream> 

int main(){
    int n, ch = 1;
    std::cin >> n;
    while (ch <= n){
        std::cout << ch << ' ';
        ch *= 2;
    }
    return 0;
}