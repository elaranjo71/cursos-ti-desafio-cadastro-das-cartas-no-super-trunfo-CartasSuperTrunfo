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

    //Escolhendo a informacao a ser avaliada
    printf("Escolha uma das opcoes abaixo para comparar:\n");
    printf("1. A populacao de cada cidade:\n");
    printf("2. A area de cada cidade:\n");
    printf("3. O PIB de cada cidade:\n");
    printf("4. O Numero de pontos turisticos:\n");
    printf("5. A Densidade demografica:\n");
    printf("A opcao escolhida foi: \n");
    scanf("%d", &opcao);
    
    //Avaliando a opcao escolhida
    switch (opcao)
    {
    case 1:
        printf("O atributo escolhido foi populacao.\n");        
        break;
    case 2:
        printf("O atributo escolhido foi area.\n");
        break;
    case 3:
        printf("O atributo escolhido foi PIB.\n");
        break;
    case 4:
        printf("O atributo escolhido foi pontos turisticos.\n");
        break;
    case 5:
        printf("O atributo escolhido foi densidade demografica.\n");
        break;    
    default:
        printf("Sua opcao e invalida!");
        break;
    }

    /*Aqui será realizado as comparações e apresentado o resultado
      conforme critério definido pelo jogador. 
    */
   //Se a opção escolhida foi a população
    if(opcao == 1){   
        if(populacao > populacao2){
            printf("»»» PAIS A «««\n");
            printf("Populacao da cidade %s: %d\n", cidade, populacao);
            printf("»»» PAIS B «««\n");
            printf("Populacao da cidade %s: %d\n", cidade2, populacao2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade);
        } else if (populacao == populacao2)
        {
            printf("»»» PAIS A «««\n");
            printf("Populacao da cidade %s: %d\n", cidade, populacao);
            printf("»»» PAIS B «««\n");
            printf("Populacao da cidade %s: %d\n", cidade2, populacao2);
            printf("»»» HOUVE EMPATE «««");
        } else {
            printf("»»» PAIS A «««\n");
            printf("Populacao da cidade %s: %d\n", cidade, populacao);
            printf("»»» PAIS B «««\n");
            printf("Populacao da cidade %s: %d\n", cidade2, populacao2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade2);
    }}

    //Se a opção escolhida foi a área (Km²)
    if(opcao == 2){   
        if(area > area2){
            printf("»»» PAIS A «««\n");
            printf("Area da cidade %s: % 2.f\n", cidade, area);
            printf("»»» PAIS B «««\n");
            printf("Area da cidade %s: % 2.f\n", cidade2, area2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade);
        } else if (area == area2)
        {
            printf("»»» PAIS A «««\n");
            printf("Area da cidade %s: %2.f km²\n", cidade, area);
            printf("»»» PAIS B «««\n");
            printf("Area da cidade %s: %2.f km²\n", cidade2, area2);
            printf("»»» HOUVE EMPATE «««");
        } else {
            printf("»»» PAIS A «««\n");
            printf("Area da cidade %s: %2.f km²\n", cidade, area);
            printf("»»» PAIS B «««\n");
            printf("Area da cidade %s: %2.f km2\n", cidade2, area2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade2);
    }}

    //Se a opção escolhida foi o PIB
    if(opcao == 3){   
        if(pib > pib2){
            printf("»»» PAIS A «««\n");
            printf("O PIB da cidade %s: % 2.f\n", cidade, pib);
            printf("»»» PAIS B «««\n");
            printf("O PIB da cidade %s: % 2.f\n", cidade2, pib2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade);
        } else if (pib == pib2)
        {
            printf("»»» PAIS A «««\n");
            printf("O PIB da cidade %s: % 2.f\n", cidade, pib);
            printf("»»» PAIS B «««\n");
            printf("O PIB da cidade %s: % 2.f\n", cidade2, pib2);
            printf("»»» HOUVE EMPATE «««");
        } else {
            printf("»»» PAIS A «««\n");
            printf("O PIB da cidade %s: % 2.f\n", cidade, pib);
            printf("»»» PAIS B «««\n");
            printf("O PIB da cidade %s: % 2.f\n", cidade2, pib2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade2);
    }}
    
        //Se a opção escolhida foi Número de pontos turísticos
    if(opcao == 4){   
        if(pontos > pontos2){
            printf("»»» PAIS A «««\n");
            printf("Pontos turisticos da cidade %s: %d\n", cidade, pontos);
            printf("»»» PAIS B «««\n");
            printf("Pontos turisticos da cidade %s: %d\n", cidade, pontos2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade);
        } else if (pontos == pontos2)
        {
            printf("»»» PAIS A «««\n");
            printf("Pontos turisticos da cidade %s: %d\n", cidade, pontos);
            printf("»»» PAIS B «««\n");
            printf("Pontos turisticos da cidade %s: %d\n", cidade, pontos2);
            printf("»»» HOUVE EMPATE «««");
        } else {
            printf("»»» PAIS A «««\n");
            printf("Pontos turisticos da cidade %s: %d\n", cidade, pontos);
            printf("»»» PAIS B «««\n");
            printf("Pontos turisticos da cidade %s: %d\n", cidade, pontos2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade2);
    }}
    
    //Se a opção escolhida foi a densidade demográfica
    if(opcao == 5){   
        if(densidadepop < densidadepop2){
            printf("»»» PAIS A «««\n");
            printf("A densidade demografica da cidade %s: %f\n", cidade, densidadepop);
            printf("»»» PAIS B «««\n");
            printf("A densidade demografica da cidade %s: %f\n", cidade, densidadepop2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade);
        } else if (densidadepop == densidadepop2)
        {
            printf("»»» PAIS A «««\n");
            printf("A densidade demografica da cidade %s: %f\n", cidade, densidadepop);
            printf("»»» PAIS B «««\n");
            printf("A densidade demografica da cidade %s: %f\n", cidade, densidadepop2);
            printf("»»» HOUVE EMPATE «««");
        } else {
            printf("»»» PAIS A «««\n");
            printf("A densidade demografica da cidade %s: %f\n", cidade, densidadepop);
            printf("»»» PAIS B «««\n");
            printf("A densidade demografica da cidade %s: %f\n", cidade, densidadepop2);
            printf("»»» A CARTA VENCEDORA: %s  «««\n", cidade2);
    }}
    return 0;   
}
