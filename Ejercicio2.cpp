#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int N;
    char A[20];
    cin >> N;

    for(int k = 0; k < N; k++){
        cin >> A;
    }
        int n = strlen(A);
        bool palindromo = true;

        for(int i = 0; i < n / 2; i++){
            if(A[i] != A[n - 1 - i]){
                palindromo = false;
                break;
            }


    return 0;
}