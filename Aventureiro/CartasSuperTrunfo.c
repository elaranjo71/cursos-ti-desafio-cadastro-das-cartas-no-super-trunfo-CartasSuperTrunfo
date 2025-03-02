#include <stdio.h>

int main(){

    char uf, codcidade[3], cidade[20];
    char uf2, codcidade2[3], cidade2[20];
    int opcao;
    int populacao, pontos;
    int populacao2, pontos2;
    float area, pib;
    float area2, pib2;
    float densidadepop, pibpcapita;
    float densidadepop2, pibpcapita2;

    //Aqui acontece a insercao de dados da carta 1
    printf("*** CARTA 1 ***\n");
    printf("Informe o estado (de A a H): \n");
    scanf("%s", &uf);
    printf("Informe codigo da cidade (Letra do estado + de 1 a 4): \n");
    scanf("%s", &codcidade);
    printf("Informe a cidade: \n");
    scanf("%s", &cidade);
    printf("Informe a populacao:n");
    scanf("%d",&populacao);
    printf("informe a area total da cidade (Km²): \n");
    scanf("%f", &area);
    printf("Informe o PIB: \n");
    scanf("%f", &pib);
    printf("Informe quantos pontos turistico a cidade possui: \n");
    scanf("%d", &pontos);

    //Aqui acontece a insercao de dados da carta 2
    printf("*** CARTA 2 ***\n");
    printf("Informe o estado (de A a H): \n");
    scanf("%s", &uf2);
    printf("Informe codigo da cidade (Letra do estado + de 1 a 4): \n");
    scanf("%s", &codcidade2);
    printf("Informe a cidade: \n");
    scanf("%s", &cidade2);
    printf("Informe a populacao:n");
    scanf("%d",&populacao2);
    printf("informe a area total da cidade (Km²): \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe quantos pontos turistico a cidade possui: \n");
    scanf("%d", &pontos2);

    //Aqui é realizado os Calculos de Densidade demografica e PIB percapta;
    
    densidadepop = populacao / area;
    pibpcapita = pib / populacao;

    densidadepop2 = populacao2 / area2;
    pibpcapita2 = pib2 / populacao2;

    printf("»»» carta 1 «««\n");
    printf("Estado: %c\n", uf);
    printf("Codigo da cidade: %s\n", codcidade);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos);
    printf("Densidade demografica: %.2f\n", densidadepop);
    printf("PIB Percapita: %.2f\n", pibpercapita);
    
    printf("»»» carta 1 «««\n");
    printf("Estado: %c\n", uf2);
    printf("Codigo da cidade: %s\n", codcidade2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade demografica: %.2f\n", densidadepop2);
    printf("PIB Percapita: %.2f\n", pibpercapita2);
  
    return 0;   
}
