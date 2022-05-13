#include <stdio.h>
#include <math.h>

double Bilhar(float x1, float y1, float x2, float y2){
    double proximabola;

    proximabola = sqrt((pow(x2-x1,2)+ pow(y2-y1,2)));

    return proximabola;
}

int main(void){
    int casos, bolas=0, i, contador=0;
    float x1, x2, y1, y2, nbolas;
    double distancia, distancia2;

    scanf("%d", &casos);

    while(casos--){
        contador++;
        scanf("%d", &bolas);
        scanf("%f %f", &x1, &y1);
        for(i=1; i <= bolas; i++){
            nbolas = 0;
            scanf("%f %f", &x2, &y2);
            distancia = Bilhar(x1, y1, x2, y2);
            if(distancia < distancia2 || i == 1){
                distancia2 = distancia;
                nbolas = i;
            }
            printf("%.f\n", nbolas);

        }
    }
    return 0;
}
