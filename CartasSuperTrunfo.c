#include <stdio.h>

int main() {
    //Declarando as variaveis
    char uf, cidade[3];
    char uf2, cidade2[3];
    int opcao;
    int populacao, pontos;
    int populacao2, pontos2;
    float area, pib;
    float area2, pib2;
    float densidadepop, pibpcapita;
    float densidadepop2, pibpcapita2;

    // Cadastro das Cartas:
    printf("*** ESTADO A ***:\n");
    printf("Informe a cidade (Letra do estado + de 1 a 4):\n");
    scanf("%s", &cidade);

    printf("Informe a populacao:\n");
    scanf("%d",&populacao);

    printf("informe a area total da cidade (Km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe quantos pontos turistico a cidade possui:\n");
    scanf("%d", &pontos);

    densidadepop = populacao / area;
    pibpcapita = pib / populacao;

    printf("*** ESTADO B ***:\n");
    printf("Informe a cidade (Letra do estado + de 1 a 4):\n");
    scanf("%s", &cidade2);

    printf("Informe a populacao:\n");
    scanf("%d",&populacao2);

    printf("informe a area total da cidade (Km²):\n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turistico a cidade possui:\n");
    scanf("%d", &pontos2);

    densidadepop2 = populacao2 / area2;
    pibpcapita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    printf("Cidade: %s _ Cidade: %s\n", cidade, cidade2);
    printf("Populacao: %d _ Populacao: %d\n", populacao, populacao2);
    printf("Area (Km2): % 2.f _ Area (Km2): % 2.f\n", area, area2);
    printf("PIB: % 2.f _ PIB: % 2.f\n", pib, pib2);
    printf("Pontos turisticos: %d _ Pontos Turisticos: %d\n", pontos, pontos2);
    printf("Densidade populacional: % 2.f _ Densidade populacional: % 2.f\n", densidadepop, densidadepop2);
    printf("PIB percapita: %2.f _ PIB percapita: %2.f\n", pibpcapita, pibpcapita2);

    //Definindo a Carta vencedora
    if(populacao > populacao2){
        printf("A cidade vencedora foi: %s\n", cidade);
    } else{
        printf("A cidade vencedora foi: %s\n",cidade2);
    } 
    
    return 0;
}
