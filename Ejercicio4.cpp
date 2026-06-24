#include <iostream>
using namespace std;

int vasos[1000001];

int main(){

    int N, C, x;
    cout << "Ingrese el numero de vasos y la cantidad de canicas: ";
    cin >> N >> C;

    cout << "Ingrese la canica en el numero de vaso: ";
    for(int i = 0; i < C; i++){
        cin >> x;
        vasos[x]++;
    }
    cout << "La cantidad de canicas en cada vaso es: ";
    for(int i = 1; i <= N; i++){
        cout << vasos[i] << '\n';
    }

    return 0;
}