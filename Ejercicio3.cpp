#include <iostream>
using namespace std;

int main(){

    int P, n, F, frecuencia[101] = {0};
    cin >> P >> n;

    for(int i = 0; i < n; i++){
        cin >> F;
        frecuencia[F]++;
    }

    return 0;
}