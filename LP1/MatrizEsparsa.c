/**
 ============================================================================
 Name        : Matriz � esparsa.c
 Author      : N�fi Coelho Leite - 20190030796
 Version     : 1.0
 Description : Matriz � esparsa ou n�o.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Esparsa(int m, int n, const int matriz[][m]){
    int i, j;
    double p = 0.0, total;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(matriz[i][j] == 0)
                p++;
        }
    }
    total = m * n;

    if(p >= (0.7)*(total)){
        return 1;
    }else{
        return 0;
    }

}

int main(){

    int m, n, i, j, esparsa;

    scanf("%d %d", &m, &n);

    int matriz[m][n];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    esparsa = Esparsa(m, n, matriz);

    if(esparsa == 1){
        puts("A matriz � esparsa");
    }else{
        puts("A matriz n�o � esparsa");
    }

    return 0;
}
