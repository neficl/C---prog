int main(void){
    float peso, altura, imc;

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a sua altura em m: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if (imc <= 18.5){
        printf("Voce esta abaixo do peso!");
    }else if (18.5 < imc && imc <= 25){
        printf("Parabens, seu peso eh ideal!");
    }else if (25 < imc && imc <= 30){
        printf("Voce esta acima do peso, ou seja, com sobrepeso!");
    }else{
        printf("Voce estah obeso!");
    }

    return 0;
}
