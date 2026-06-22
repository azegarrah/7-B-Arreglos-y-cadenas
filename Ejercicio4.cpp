#include <iostream>
using namespace std;

int vasos[1000001];

int main(){

    int N, C, x;
    cin >> N >> C;

    for(int i = 0; i < C; i++){
        cin >> x;
        vasos[x]++;
    }
    for(int i = 1; i <= N; i++){
        cout << vasos[i] << '\n';
    }

    return 0;
}