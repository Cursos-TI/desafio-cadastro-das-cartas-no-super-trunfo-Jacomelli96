#include <stdio.h>

int main() {
    char estadoA[20] = "Amazonas";
    char carta[20] = "A01";
    char cidade [20] = "Manaus";
    float populacao = 400000;
    float area = 20000000;
    float pib = 30050; "bilhoes de reais";
    int turismo = 35;
    float densidade = populacao / area;
    float pibpercapita = pib / populacao;

    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB R$: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", turismo);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pibpercapita);

printf("\n");

    char estadoB[20] = "Ceara";
    char cartab[20] = "B01";
    char cidadeb [20] = "Fortaleza";
    float populacaob = 500000;
    float areab = 30000000;
    float pibb = 40080; "bilhoes de reais";
    int turismob = 65;
    float densidadeb = populacaob / areab;
    float pibpercapitab = pibb / populacaob;

    printf("Carta: %s\n", cartab);
    printf("Estado %s\n", estadoB);
    printf("Cidade %s\n", cidadeb);
    printf("População %.2f\n", populacaob);
    printf("Área %.2f\n", areab);
    printf("PIB R$: %.2f\n", pibb);
    printf("Pontos Turisticos %d\n", turismob);
    printf("Desnsidade populacional: %.2f\n", densidadeb);
    printf("PIB per capita: %.2f\n", pibpercapitab);

    return 0;
}