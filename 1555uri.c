#include <stdio.h>

int Rafael(int x, int y){
    int r;
    r = ((3*x)*(3*x))+ (y*y);
    return r;
}
int Beto(int x, int y){
    int b;
    b = (2*(x*x)) + (5*y)*(5*y);
    return b;
}
int Carlos(int x, int y){
    int c;
    c = (-100*x) + (y*y*y);
    return c;
}

int main(void) {
    int x, y, q;
    int r, b, c, i;

    scanf("%d", &q);

    for (i = 1; i <= q; i++){
        scanf("%d %d", &x, &y);
        r = Rafael(x,y);
        b = Beto(x,y);
        c = Carlos(x,y);
        if(r > b && r > c){
            puts("Rafael ganhou");
        }else if(b > r && b > c){
            puts("Beto ganhou");
        }else{
            puts("Carlos ganhou");
        }
    }

	return 0;
}
