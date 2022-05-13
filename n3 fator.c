#include <stdio.h>

int main (void){

    int n, i;

    scanf("%d", &n);

    while(n){
    for(i = 1; i < n; i = i + 1){
        printf("%d ", i);
    }
        printf("%d\n", n);
        scanf("%d", &n);
    }
    return 0;
}
