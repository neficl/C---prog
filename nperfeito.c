#include <stdio.h>

int main (void){

    int i, n, x, s;

    scanf("%d", &n);

    while(1 <= n && n <= 20){
        scanf("%d", &x);
        s = 0;
        while(x >= 1){
            for(i = 1; i <= x/2; i++){
                if(x % i==0){
                    s+=i;
                }
            }

        if ( s == x){
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
        }
        scanf("%d", &n);
    }

    return 0;
}
