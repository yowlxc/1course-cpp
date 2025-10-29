// В цепочках ДНК символы «А» и «Т» дополняют друг друга, как «С» и «G». 
// Нужно написать программу, которая получает на вход последовательность ДНК и 
// на выходе отображает комлементарную ей.
// Пример ввода:
// GTAT
// Пример вывода:
// CATA

#include <iostream>
#include <string>
//#include <stdio.h>

int main(){
    std::string str;
    getline(std::cin, str);
    for(int i = 0; i < int(str.size()); i++){
        switch (str[i]){
            case 'A':
                str[i] = 'T';
                break;
            case 'T':
                str[i] = 'A';
                break;
            case 'C':
                str[i] = 'G';
                break;
            case 'G':
                str[i] = 'C';
                break;
        }
    }
    std::cout << str;
    return 0;
}