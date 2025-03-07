#include <stdio.h>

int main(){

    char uf1[3], uf2[3];
    char codcidade1[3], codcidade2[3];
    char cidade1[20], cidade2[20];
    int opcao, resultado;
    int populacao1, pontos1;
    int populacao2, pontos2;
    float area1, pib1;
    float area2, pib2;
    float densidadepop, pibpcapita;
    float densidadepop2, pibpcapita2;
    float superpoder1, superpoder2;

    //Aqui acontece a insercao de dados das cartas
    printf("*** CARTA 1 *** \n");
    printf("Informe o Estado: \n");
    scanf("%s", &uf1);
    printf("Informe o código da cidade (Letra do estado + de 1 a 4): \n");
    scanf("%s", &codcidade1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Informe a populacao: \n");
    scanf("%d", &populacao1);
    printf("informe a area total da cidade (Km²): \n");
    scanf("%f", &area1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("Informe quantos pontos turistico a cidade possui: \n");
    scanf("%d", &pontos1);

    printf("*** CARTA 2 *** \n");
    printf("Informe o Estado: \n");
    scanf("%s", &uf2);
    printf("Informe o código da cidade (Letra do estado + de 1 a 4): \n");
    scanf("%s", &codcidade2);
    printf("Informe a cidade: \n");
    scanf("%s", &cidade2);    
    printf("Informe a populacao: \n");
    scanf("%d",&populacao2);
    printf("informe a area total da cidade (Km²): \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe quantos pontos turistico a cidade possui: \n");
    scanf("%d", &pontos2);

    //Aqui acontece os cálculos da Densidade,  pib percapita e super poder
    densidadepop = (float) populacao1 / area1;
    pibpcapita = (float) pib1 / populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + pibpcapita + densidadepop;

    densidadepop2 = (float) populacao2 / area2;
    pibpcapita2 = (float) pib2 / populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpcapita2 + densidadepop2;

    //Escolhendo a informacao a ser avaliada
    printf("Escolha as opcoes diferentes abaixo para comparar:\n");
    printf("1. A populacao de cada cidade:\n");
    printf("2. A area de cada cidade:\n");
    printf("3. O PIB de cada cidade:\n");
    printf("4. O Numero de pontos turisticos:\n");
    printf("5. A Densidade demografica:\n");
    printf("6. O PIB per Capita:\n");
    printf("7. o Super poder\n");
    printf("Escolha a opcao: \n");
    scanf("%d", &opcao);

    //Retornando os dados da carta
    printf("Cidade: %s - Cidade: %s\n", cidade1, cidade2);
    printf("Populacao: %d - Populacao: %d\n", populacao1,  populacao2);
    printf("Area (Km2): % 2.f - Area: % 2.f\n", area1, area2);
    printf("PIB: % 2.f - PIB: % 2.f\n", pib1, pib2);
    printf("Pontos turisticos: %d - Pontos turisticos: %d\n", pontos1, pontos2);
    printf("Densidade populacional: % 2.f - Densidade populacional: % 2.f\n", densidadepop, densidadepop2);
    printf("PIB percapta: % 2.f - PIB percapta: % 2.f\n", pibpcapita, pibpcapita2);

    /*Aqui será realizado as comparações e apresentado o resultado
      conforme critérios definidos pelo jogador. 
    */
    if(opcao == 1){          
        if(populacao1 > populacao2){
            resultado = 1;            
            printf("A CARTA 1: %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2: %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    if(opcao == 2){          
        if(area1 > area2){
            resultado = 1;            
            printf("A CARTA 1: %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2: %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    if(opcao ==3){          
        if(pib1 > pib2){
            resultado = 1;            
            printf("A CARTA 1 %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2 %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    if(opcao ==4){          
        if(pontos1 > pontos2){
            resultado = 1;            
            printf("A CARTA 1 %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2 %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    if(opcao ==5){          
        if(densidadepop < densidadepop2){
            resultado = 1;            
            printf("A CARTA 1 %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2 %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    if(opcao ==6){          
        if(pibpcapita > pibpcapita2){
            resultado = 1;            
            printf("A CARTA 1 %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2 %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    if(opcao ==7){          
        if(superpoder1 > superpoder2){
            resultado = 1;            
            printf("A CARTA 1 %s venceu: (%d)\n",cidade1, resultado);
        }else{
            resultado = 0;
            printf("CARTA 2 %s venceu: (%d)\n",cidade2, resultado);
        }
    }

    return 0;

}