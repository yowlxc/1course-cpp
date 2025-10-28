#include <iostream> 
using namespace std;
int main(){
    int N, num;
    cin >> N;
    int mas[N];
    cin >> num;
    mas[0] = num;
    int min = num;
    for(int i = 1; i < N; i++){
        cin >> num;
        if (num < min) min = num;
        mas[i] = num;
    }
    int k = 0;
    for(int i = 0; i < N; i++) if(mas[i] == min) k++;
    cout << k;
}


