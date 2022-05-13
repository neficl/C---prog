#include <stdio.h>

int main(void){
    int p, r;

    scanf("%d %d", &p, &r);

    if ( p == 0){
        printf ("C\n");
    } else if (1 == p && r == 0) {
        printf ("B\n");
    } else if ( 1 == p && r== 1){
        printf ("A\n");
    }

    return 0;
}
