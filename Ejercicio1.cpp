#include <iostream>
using namespace std;

int main(){
    int N, A[1000];
    cout << "Ingrese la cantidad de datos: ";
    cin >> N;

    cout << "Ingrese los datos: ";
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    cout << "Los datos de forma reversa son: ";
    for(int i = N - 1; i >= 0; i--){
        cout << A[i] << " ";
    }

    return 0;
}