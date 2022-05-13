#include <stdio.h>

int Batalha(int bonus, int ataque, int defesa, int level){
    int ValorGolpe;
    if(level % 2 == 0){
        ValorGolpe = ((ataque + defesa)/2) + bonus;
    }else{
        ValorGolpe = ((ataque + defesa)/2);
    }
    return ValorGolpe;
}

int main(void) {
    int Dabriel, Guarte;
    int q, i, bonus, ataque, defesa, level;

    scanf("%d", &q);

    for (i = 1; i <= q; i++){
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataque, &defesa, &level);
            Dabriel = Batalha(bonus, ataque, defesa, level);

        scanf("%d %d %d", &ataque, &defesa, &level);
            Guarte = Batalha(bonus, ataque, defesa, level);

        if(Dabriel > Guarte){
            puts("Dabriel");
        }else if(Guarte > Dabriel){
            puts("Guarte");
        }else{
            puts("Empate");
        }
    }

	return 0;
}
