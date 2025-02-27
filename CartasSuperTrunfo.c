#include <stdio.h>

int main() {
    //Declarando as variaveis
    char uf[2], codcidade[3], cidade[20];
    char uf2[2], codcidade2[3], cidade2[20];
    int opcao;
    int populacao, pontos;
    int populacao2, pontos2;
    float area, pib;
    float area2, pib2;
    float densidadepop, pibpcapita;
    float densidadepop2, pibpcapita2;

    // Cadastro das Cartas:
    printf("*** CARTA 1 ***:\n");
    printf("Informe o Estado(letra entre "A" e "H") : \n");
    scanf("%c", &uf);
    printf("Informe o codigo da cidade (Letra do estado + de 1 a 4): \n");
    scanf("%s", &codcidade);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade);    
    printf("Informe a populacao:\n");
    scanf("%d",&populacao);
    printf("informe a area total da cidade (Km²):\n");
    scanf("%f", &area);
    printf("Informe o PIB:\n");
    scanf("%f", &pib);
    printf("Informe quantos pontos turistico a cidade possui:\n");
    scanf("%d", &pontos);

    printf("*** CARTA 2 ***:\n");
    printf("Informe o Estado(letra entre "A" e "H") : \n");
    scanf("%c", &uf2);
    printf("Informe o codigo da cidade (Letra do estado + de 1 a 4):\n");
    scanf("%s", &cidade2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade2);    
    printf("Informe a populacao:\n");
    scanf("%d",&populacao2);
    printf("informe a area total da cidade (Km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe quantos pontos turistico a cidade possui:\n");
    scanf("%d", &pontos2);

    // Exibição dos dados calculados:
    printf("»»» CARTA 1 «««");
    printf("Estado: %s\n", uf);
    printf("Código da cidade: %s\n", codcidade);
    printf("Cidade: %s\n", cidade);
    pritnf("Populacao: %d\n", populacao);
    printf("Area: % 2.f\n km²", area);
    printf("PIB: % 2.fn milhoes de reais", pib);
    printf("Numero de pontos turisticos: %d\n", pontos);

    printf("»»» CARTA 2 «««");
    printf("Estado: %s\n", uf2);
    printf("Código da cidade: %s\n", codcidade2);
    printf("Cidade: %s\n", cidade2);
    pritnf("Populacao: %d\n", populacao2);
    printf("Area: % 2.f\n km²", area2);
    printf("PIB: % 2.fn milhoes de reais", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);

    return 0;
}
