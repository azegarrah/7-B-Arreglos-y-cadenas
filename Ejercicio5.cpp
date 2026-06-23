#include <iostream>
using namespace std;

int A[1000][1000];
int B[1000][1000];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            B[j][n - 1 - i] = A[i][j];
        }
    }


    
    return 0;
}