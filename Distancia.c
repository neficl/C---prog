#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}tponto;

float distancia(tponto t1, tponto t2){
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
};

int main(void){
    tponto p1;
    int n;
    float dist, md = 99999999, mi;

    scanf("%d", &p1.x);
    scanf("%d", &p1.y);

    scanf("%d", &n);

    tPonto vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i].x);
        scanf("%d", &vet[i].y);
    }
    dist = distancia(p1, vet[i]);
    if (dist < md){
        md = dist;
        mi = i;
    }


    printf("Ponto mais perto é (%d, %d)\n", vet[mi].x, vet[mi].y);

    return 0;
}
