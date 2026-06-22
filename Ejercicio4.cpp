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


    return 0;
}