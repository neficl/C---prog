#include <stdio.h>

int main(void){

    int total = 0, n, i, j;
    int x[101];

    if(scanf("%d", &n)){};

    for(i = 0; i < n; i++){
        if(scanf("%d", &x[i])){};

        if(x[i] == 0){
            if(x[i-1] != 0){
                x[i-1] = 0;
            }else{
                int j = i;
                do{
                    j--;
                }while(x[j] == 0);
                x[j] = 0;
            }
        }

    }
    for(i = 0; i < n; i++){
        total += x[i];
    }

    printf("%d\n", total);

    return 0;
}
