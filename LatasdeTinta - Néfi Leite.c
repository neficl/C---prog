#include <stdio.h>

int main(){
	float comprimento, altura, litrosNecessarios;
    float rendimentoDaTinta, volumeDaLata, quantidadeDeLatas;

    printf("Quantas latas de tintas sao necessarias para pintar a parede?\n\n");
    printf("Qual o comprimento da parede em metros: ");
    scanf("%f", &comprimento);
    printf("Qual a altura da parede em metros: ");
    scanf("%f", &altura);
    printf("Qual o rendimento da tinta em m2/l: ");
    scanf("%f", &rendimentoDaTinta);
    litrosNecessarios = (comprimento * altura) / rendimentoDaTinta;
    printf("OK, voce precisara de %.1f litros.\n\n", litrosNecessarios);

    printf("Qual o volume de cada lata de tinta em litros: ");
    scanf("%f", &volumeDaLata);
    quantidadeDeLatas = litrosNecessarios / volumeDaLata;
    printf("Pronto, compre %.1f latas.\n", quantidadeDeLatas);

    return 0;
}
