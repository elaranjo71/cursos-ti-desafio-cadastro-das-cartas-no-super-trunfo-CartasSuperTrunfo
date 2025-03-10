  #include <stdio.h>

int main(){

    char uf1[3], uf2[3];
    char codcidade1[3], codcidade2[3];
    char cidade1[20], cidade2[20];
    int opcao, resultado;
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, pib1;
    float area2, pib2;
    float densidadepop, pibpcapita;
    float densidadepop2, pibpcapita2;
    float superpoder1, superpoder2;

    //Aqui acontece a insercao de dados das cartas
    printf("*** CARTA 1 *** \n");
    printf("Informe o Estado(Letra de A a H): \n");
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
    printf("Informe o Estado(Letra de A a H): \n");
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

    /*Aqui será realizado as comparações e apresentado o resultado
      conforme critérios definidos pelo jogador. 
    */
    if(populacao1 > populacao2){
        resultado = 1;            
            printf("População: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("População: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    if(area1 > area2){
        resultado = 1;            
        printf("Área: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("Área: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    if(pib1 > pib2){
        resultado = 1;            
        printf("PIB: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("PIB: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    if(pontos1 > pontos2){
        resultado = 1;            
        printf("Pontos Turísticos: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("Pontos Turístivos: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    if(densidadepop < densidadepop2){
        resultado = 1;            
        printf("Densidade Demográfica: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("Densidade Demográfica: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    if(pibpcapita > pibpcapita2){
        resultado = 1;              
        printf("PIB percapita: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("PIB percapita: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    if(superpoder1 > superpoder2){
        resultado = 1;             
        printf("Super Poder: A CARTA 1 %s venceu (%d)\n",cidade1, resultado);
    }else{
        resultado = 0;
        printf("Super Poder: A CARTA 2 %s venceu (%d)\n",cidade2, resultado);
    }

    return 0;

}
