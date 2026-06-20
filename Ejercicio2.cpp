#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int N;
    char A[20];
    cout << "Ingrese la cantidad de palabras: ";
    cin >> N;

    for(int k = 0; k < N; k++){
        cout << "Ingrese la palabra: ";
        cin >> A;
    
        int n = strlen(A);
        bool palindromo = true;
        for(int i = 0; i < n / 2; i++){
            if(A[i] != A[n - 1 - i]){
                palindromo = false;
            }
        }
        if(palindromo == true)
            cout << "Si es palindromo: " << "P" << '\n';
        else
            cout << "No es palindromo: " << "NP" << '\n';
    }
    return 0;
}