#include <iostream>
using namespace std;

int main(){

    int P, n, F, frecuencia[101] = {0};
    cout << "Ingrese el numero de profesores y alumnos: ";
    cin >> P >> n;

    for(int i = 0; i < n; i++){
        cout << "Ingrese el voto: ";
        cin >> F;
        frecuencia[F]++;
    }
    cout << "***El resultado es***\n";
    for(int i = 1; i <= P; i++){
        cout << i << "-" << frecuencia[i] << '\n';
    }

    return 0;
}