#include <stdio.h>
#include <math.h>

int * Func(int a){
    static int x = 5;

    printf("%d %d\n", x, a);
    x = x * a;

    printf("%d %d\n", x, a);

    return &x;


}
int main (void){

    int ar[5]={1,2,3,4,5};
    int x = 5, y = 10;

    int *p1, *p2, *p3, *p4;

    p1 = &ar[2];
    p2 = &x;
    p3 = &y;
    p4 = Func (2);
    printf("%d %d %d %d\n", *p1, *p2, p3[0], *p4);

    x = x+y;
    printf("%d\n", x);
    *p3 = x * y;
    p1++;
    printf("%d\n", p1);
    printf("%d\n", x);
    p4 = Func(x);
    printf("%d\n", x);

     printf("%d %d %d %d\n", p1[1], *p2, *p3, *p4);

    return 0;
}
