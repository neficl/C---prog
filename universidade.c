int main(void){
        /*Caro programador, em primeiro lugar selecionamos as variaveis: que sao as 6 notas, as 3 medias e a media final ou semestral*/
    float nota1, nota2, nota3, nota4, nota5, nota6;
    float mediaSemestral, media1, media2, media3;
        /*Agora pediremos as notas ao professor em ordem, da primeira ate a ultima nota. Contudo, a cada duas notas, ou seja, a cada bimestre faremos uma media*/

    printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

    if (nota1 > nota2){
        media1 = ((nota1*6) + (nota2*4)) / (6+4) ;
        printf("Sua media da primeiro bimestre foi: %.1f \n", media1);
    } else{
        media1 = ((nota2*6) + (nota1*4)) / (6+4) ;
        printf("Sua media do primeiro bimestre foi: %.1f \n", media1);
    }

    printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);
    printf("Digite a nota da quarta prova: ");
        scanf("%f", &nota4);

    if (nota3 > nota4){
        media2 = ((nota3*6) + (nota4*4)) / (6+4) ;
        printf("Sua media do segundo bimestre foi: %.1f \n", media2);
    } else{
        media2 = ((nota4*6) + (nota3*4)) / (6+4) ;
        printf("Sua media do segundo bimestre foi: %.1f \n", media2);
    }

    printf("Digite a nota da quinta prova: ");
        scanf("%f", &nota5);
    printf("Digite a nota da sexta prova: ");
        scanf("%f", &nota6);

    if (nota5 > nota6){
        media3 = ((nota5*6) + (nota6*4)) / (6+4) ;
        printf("Sua media do terceiro bimestre foi: %.1f \n", media3);
    } else{
        media3 = ((nota6*6) + (nota5*4)) / (6+4) ;
        printf("Sua media do terceiro bimestre foi: %.1f \n", media3);
    }
        /*Por fim, faremos o calculo da media final ou semestral e ainda vamos acrescentar um conceito de acordo com a media*/

    mediaSemestral = (media1 + media2 + media3) / 3;
    printf("Sua media do semestre foi: %.1f \n", mediaSemestral);

    if (9 <= mediaSemestral && mediaSemestral <= 10){
        puts("Seu conceito em relacao a media foi A!");
    } else if (8<= mediaSemestral && mediaSemestral <9){
        puts("Seu conceito em relacao a media foi B!");
    } else if (7<= mediaSemestral && mediaSemestral <8){
        puts("Seu conceito em relacao a media foi C!");
    } else if (6<= mediaSemestral && mediaSemestral <7){
        puts("Seu conceito em relacao a media foi D!");
    } else if (5<= mediaSemestral && mediaSemestral <6){
        puts("Seu conceito em relacao a media foi E!");
    } else {
        puts("Seu conceito em relacao a media foi F!");
    }

    return 0;
}
