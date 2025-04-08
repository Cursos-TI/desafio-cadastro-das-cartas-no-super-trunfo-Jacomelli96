#include <stdio.h>

int main() {
    char estadoA[20] = "Amazonas";
    char carta[20] = "A01";
    char cidade [20] = "Manaus";
    int populacao = 400000;
    float area = 20000000;
    int turismo = 35;

    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("Pontos Turisticos: %d\n", turismo);
   
printf("\n");

    char estadoB[20] = "Ceara";
    char cartab[20] = "B01";
    char cidadeb [20] = "Fortaleza";
    int populacaob = 500000;
    float areab = 200000000;
    int turismob = 65;

    printf("Carta: %s\n", cartab);
    printf("Estado %s\n", estadoB);
    printf("Cidade %s\n", cidadeb);
    printf("População %.2f\n", populacaob);
    printf("Área %.2f\n", areab);
    printf("Pontos Turisticos %d\n", turismob);


    return 0;
}
