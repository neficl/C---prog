#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int N, i, j;

    cin >> N;

    int vetor[N];

    for(i = 0; i < N; i++){
        cin >> vetor[i];
    }
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if (vetor[i] == vetor[j]){
            vetor[j] = 0;
            }
        }
    }

    for(i = 0; i < N; i++){
        if(vetor[i] != 0)
        cout << vetor[i] << " ";
    }
    return 0;
}
