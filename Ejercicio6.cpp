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
    for(int i = 0; i < k - 1; i++){
        for(int j = 0; j < k - 1; j++){
            if(letras[j] > letras[j + 1]){
                char aux = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = aux;
            }
        }
    }
    
    return 0;
}