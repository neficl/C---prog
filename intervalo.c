#include <stdio.h>


int main(void){

    int n, i, in, out, numero;

    scanf("%d", &numero);

    in = 0;
    out = 0;

    for(i = 0; i < numero; i = i + 1){
        scanf("%d", &n);
        if((n >= 10) && (n <= 20)){
            in = in + 1;
        }else{
            out = out + 1;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
