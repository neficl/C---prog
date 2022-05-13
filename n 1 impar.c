#include <stdio.h>

int main (void){

    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i = i + 1){
                if(n % i == 0)
                printf("%d\n", i);
        }
         scanf("%d", &n);

    return 0;
}
