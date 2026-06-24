#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char texto[101];
    char letras[101];
    int n = strlen(texto);
    int k = 0;

    cin.getline(texto, 101);

    for(int i = 0; i < n; i++){
        if (texto[i] >= 'a' && texto[i] <= 'z'){
            letras[k] = texto[i];
            k = k + 1;
        }
    }

    return 0;
}