#include <stdio.h>

int main (void){

    float i, s, c, m;


    s = 0;
    c = 0;

    do{
       scanf("%f", &i);
       s = s + i;
       c = c + 1;
    } while(i>= 0);

    m = (s - i)/ (c - 1);
    printf("%.2f\n", m);

    return 0;
}
