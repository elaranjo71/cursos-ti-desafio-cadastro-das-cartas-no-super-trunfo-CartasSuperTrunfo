#include <stdio.h>

int main(){
    
    //Aqui declaramos as variáveis
    char uf, uf2;
    char cidade[20], cidade2[20], codcidade[3], codcidade2[3];
    int populacao, populacao2, pontos, pontos2, opcao1, opcao2, criterio;
    float area, pib, area2, pib2, denpop, pibpcapita, denpop2, pibpcapita2;
    float resultado1, resultado2, resultado3, resultado4;

    //Aqui pedido as informações de cada carta por atributo
    printf("*** CARTA 1 ***\n");
    printf("Informe o estado (de A a H): ");
    scanf("%s", &uf);
    printf("Informe o Codigo da cidade (Estado + de 1 a 4): ");
    scanf("%s", &codcidade);
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade);
    printf("Informe a populacao: ");
    scanf("%d",&populacao);
    printf("informe a area total da cidade (Km²): ");
    scanf("%f", &area);
    printf("Informe o PIB: ");
    scanf("%f", &pib);
    printf("Informe quantos pontos turistico a cidade possui: ");
    scanf("%d", &pontos);

    printf("*** CARTA 2 ***\n");
    printf("Informe o estado (de A a H): ");
    scanf("%s", &uf2);
    printf("Informe Codigo da cidade (Estado + de 1 a 4): ");
    scanf("%s", &codcidade2);
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Informe a populacao: ");
    scanf("%d",&populacao2);
    printf("informe a area total da cidade (Km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe quantos pontos turistico a cidade possui: ");
    scanf("%d", &pontos2);

    //Calculando a Densidade o percapita da carta 1
    denpop = populacao / area;
    pibpcapita = pib / populacao;

    //Calculando a Densidade o percapita da carta 2
    denpop2 = populacao2 / area2;
    pibpcapita2 = pib2 / populacao2;

    printf("»»» SEJA BEM VINDO «««\n");
    printf("Escolha un dos atributos:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");

    printf("Informe a primeira opção: ");
    scanf("%d", &opcao1);
   
    printf("Informe a segunda opção: ");
    scanf("%d", &opcao2);
    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo anteriomente!\n");
    } else {
        switch (opcao2){
    case 1:
        resultado2 = populacao > populacao2;
        break;    
    case 2:
        resultado2 = area > area2;
        break;
    case 3:
        resultado2 = pib > pib2;
        break;
    case 4:
        resultado2 = pontos > pontos2;
        break;
    case 5:
        resultado2 = denpop > denpop2;
        break;
    case 6:
        resultado2 = pibpcapita > pibpcapita2;
        break; 
    default:
        printf("Opção inválida!\n");
        break;
    } }
    
    if (opcao1 != opcao2){
        if ((opcao1 == 1) && (opcao2 == 2) || (opcao1 == 2) && (opcao2 == 1)) {
            criterio = 12;
        } else if ((opcao1 == 1) && (opcao2 == 3) || (opcao1 == 3) && (opcao2 == 1)) {
            criterio = 13;
        } else if ((opcao1 == 1) && (opcao2 == 4) || (opcao1 == 4) && (opcao2 == 1)) {
            criterio = 14;
        } else if ((opcao1 == 1) && (opcao2 == 5) || (opcao1 == 5) && (opcao2 == 1)) {
            criterio = 15;
        } else if ((opcao1 == 1) && (opcao2 == 6) || (opcao1 == 6) && (opcao2 == 1)) {
            criterio = 16;
        } else if ((opcao1 == 2) && (opcao2 == 3) || (opcao1 == 3) && (opcao2 == 2)) {
            criterio = 23;
        } else if ((opcao1 == 2) && (opcao2 == 4) || (opcao1 == 4) && (opcao2 == 2)) {
            criterio = 24;
        } else if ((opcao1 == 2) && (opcao2 == 5) || (opcao1 == 5) && (opcao2 == 2)) {
            criterio = 25;
        } else if ((opcao1 == 2) && (opcao2 == 6) || (opcao1 == 6) && (opcao2 == 2)) {
            criterio = 26;
        } else if ((opcao1 == 3) && (opcao2 == 4) || (opcao1 == 4) && (opcao2 == 3)) {
            criterio = 34;
        } else if ((opcao1 == 3) && (opcao2 == 5) || (opcao1 == 5) && (opcao2 == 3)) {
            criterio = 35;
        } else if ((opcao1 == 3) && (opcao2 == 6) || (opcao1 == 6) && (opcao2 == 3)) {
            criterio = 36;
        } else if ((opcao1 == 4) && (opcao2 == 5) || (opcao1 == 5) && (opcao2 == 4)) {
            criterio = 45;
        } else if ((opcao1 == 4) && (opcao2 == 6) || (opcao1 == 6) && (opcao2 == 4)) {
            criterio = 46;
        } else if ((opcao1 == 5) && (opcao2 == 5) || (opcao1 == 6) && (opcao2 == 5)) {
            criterio = 56;
    }}

    switch (criterio){
    case 12:
        resultado3 = populacao + area;
        resultado4 = populacao2 + area2;
        break;
    case 13:
        resultado3 = populacao + pib;
        resultado4 = populacao2 + pib2;
        break;
    case 14:
        resultado3 = populacao + pontos;
        resultado4 = populacao2 + pontos2;
        break;
    case 15:
        resultado3 = populacao + denpop;
        resultado4 = populacao2 + denpop2;
        break;
    case 16:
        resultado3 = populacao + pibpcapita;
        resultado4 = populacao2 + pibpcapita2;
        break;
    case 23:
        resultado3 = area + pib;
        resultado4 = area2 + pib2;
        break;
    case 24:
        resultado3 = area + pontos;
        resultado4 = area2 + pontos2;
        break;
    case 25:
        resultado3 = area + denpop;
        resultado4 = area2 + denpop2;
         break;
    case 26:
        resultado3 = area + pibpcapita;
        resultado4 = area2 + pibpcapita2;
        break;
    case 34:
        resultado3 = pib + pontos;
        resultado4 = pib2 + pontos2;
        break;
    case 35:
        resultado3 = pib + denpop;        
        resultado4 = pib2 + denpop2;
        break;
    case 36:
        resultado3 = pib + pibpcapita;
        resultado4 = pib2 + pibpcapita2;
    case 45:
        resultado3 = pontos + denpop;
        resultado4 = pontos2 + denpop2;
        break;
    case 46:
        resultado3 = pontos + pibpcapita;
        resultado4 = pontos2 + pibpcapita2;
        break;
    case 56:
        resultado3 = denpop + pibpcapita;
        resultado4 = denpop2 + pibpcapita2;
         break;

        default:
        printf("Opção Inválida!\n");
        break;
    }

    if(criterio == 12){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao, area);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao2, area2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao, area);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao2, area2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao, area);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao2, area2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}
    
    if(criterio == 13){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  PIB: %.2f\n", populacao, pib);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  PIB: %.2f\n", populacao2, pib2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 = resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  PIB: %.2f\n", populacao, pib);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  PIB: %.2f\n", populacao2, pib2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  PIB: %.2f\n", populacao, pib);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Área: %.2f\n", populacao2, pib2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 14){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Pontos Turististicos: %d\n", populacao, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Pontos Turististicos: %d\n", populacao2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Pontos Turististicos: %d\n", populacao, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Pontos Turististicos: %d\n", populacao2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Pontos Turististicos: %d\n", populacao, pontos);
            printf("Valor da carta: %d\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Pontos Turististicos: %d\n", populacao2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 15){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Densidade Demográfica: %.2f\n", populacao, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Densidade Demográfica: %.2f\n", populacao2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Densidade Demográfica: %.2f\n", populacao, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Densidade Demográfica: %.2f\n", populacao2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  Densidade Demografica: %.2f\n", populacao, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  Densidade Demográfica: %.2f\n", populacao2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 16){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  PIB per Capita: %.2f\n", populacao, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  PIB per Capita: %.2f\n", populacao2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  PIB per Capita: %.2f\n", populacao, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  PIB per Capita: %.2f\n", populacao2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: População: %d  -  PIB per Capita: %.2f\n", populacao, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: População: %d  -  PIB per Capita: %.2f\n", populacao2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 23){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  PIB: %.2f\n", area, pib);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  PIB: %.2f\n", area2, pib2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  PIB: %.2f\n", area, pib);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  PIB: %.2f\n", area2, pib2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  PIB: %.2f\n", area, pib);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  PIB: %.2f\n", area2, pib2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 24){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  Pontos Turísticos: %d\n", area, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  Pontos Turísitcos: %d\n", area2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  Pontos Turísticos: %d\n", area, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  Pontos Turísitcos: %d\n", area2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  Pontos Turísticos: %d\n", area, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  Pontos: %.2f\n", area2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 25){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  Densidade Demográfica: %.2f\n", area, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  Densidade Demográfica: %.2f\n", area2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado3 == resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  Densidade Demográfica: %.2f\n", area, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  Densidade Demográfica: %.2f\n", area, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  Densidade Demográfica: %.2f\n", area2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 26){
        if (resultado3 > resultado4){
            printf(" CARTA 1\n");
            printf("Atributos: Área: %.2f  -  PIB per Capita: %.2f\n", area, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Área: %.2f  -  PIB per Capita: %.2f\n", area2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if(resultado3 == resultado4){
                printf(" CARTA 1\n");
                printf("Atributos: Área: %.2f  -  PIB per Capita: %.2f\n", area, pibpcapita);
                printf("Valor da carta: %.2f\n", resultado3);
                printf(" CARTA 2\n");
                printf("Atributos: Área: %.2f  -  PIB per Capita: %.2f\n", area2, pibpcapita2);
                printf("Valor da carta: %.2f\n", resultado4);
                printf("HOUVE EMPATE!\n");
            } else {
                printf(" CARTA 1\n");
                printf("Atributos: Área: %.2f  -  PIB per Capita: %.2f\n", area, pibpcapita);
                printf("Valor da carta: %.2f\n", resultado3);
                printf(" CARTA 2\n");
                printf("Atributos: Área: %.2f  -  PIB per Capita: %.2f\n", area2, pibpcapita2);
                printf("Valor da carta: %.2f\n", resultado4);
                printf("A CARTA 2 VENCEU\n");
            }}

    if(criterio == 34){
        if (resultado1 > resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  Pontos Turísticos: %d\n", pib, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  Pontos Turísticos: %d\n", pib2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado1 == resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  Pontos Turísticos: %d\n", pib, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  Pontos Turísticos: %d\n", pib2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  Pontos Turísticos: %d\n", pib, pontos);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  Pontos Turísticos: %d\n", pib2, pontos2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 35){
        if (resultado1 > resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  Densidade Demográfica: %.2f\n", pib, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  Densidade Demográfica: %.2f\n", pib2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado1 == resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  Densidade Demográfica: %.2f\n", pib, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  Densidade Demográfica: %.2f\n", pib2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  Densidade Demografica: %.2f\n", pib, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  Densidade Demográfica: %.2f\n", pib2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 36){
        if (resultado1 > resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  PIB per Capita: %.2f\n", pib, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  PIB per Capita: %.2f\n", pib2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado1 == resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  PIB per Capita: %.2f\n", pib, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  PIB per Capita: %.2f\n", pib2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: PIB: %.2f  -  PIB per Capita: %.2f\n", pib, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: PIB: %.2f  -  PIB per Capita: %.2f\n", pib2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 45){
        if (resultado1 > resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: Pontos Turísticos: %d  -  Densidade Demográfica: %.2f\n", pontos, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Pontos Turísticos: %d  -  Densidade Demográfica: %.2f\n", pontos2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado1 == resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: Pontos Turísticos: %d  -  Densidade Demográfica: %.2f\n", pontos, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Pontos Turísticos: %d  -  Densidade Demográfica: %.2f\n", pontos2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: Pontos Turísticos: %d  -  Densidade Demografica: %.2f\n", pontos, denpop);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Pontos Turísticos: %d  -  Densidade Demográfica: %.2f\n", pontos2, denpop2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 46){
        if (resultado1 > resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: Pontos Turísticos: %d  -  PIB per Capita: %.2f\n", pontos, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Pontos Turísticos: %d  -  PIB per Capita: %.2f\n", pontos2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado1 == resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: Pontos Turísticos: %d  -  PIB per Capita: %.2f\n", pontos, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Pontos Turísticos: %d  -  PIB per Capita: %.2f\n", pontos2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: Pontos Turísticos: %d  -  PIB per Capita: %.2f\n", pontos, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Pontos Turísticos: %d  -  PIB per Capita: %.2f\n", pontos2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    if(criterio == 56){
        if (resultado1 > resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: Densidade Demográfica: %.2f  -  PIB per Capita: %.2f\n", denpop, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Densidade Demongráfica: %.2f  -  PIB per Capita: %.2f\n", denpop2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 1 VENCEU\n");
        } else if (resultado1 == resultado2){
            printf(" CARTA 1\n");
            printf("Atributos: Densidade Demográfica: %.2f  -  PIB per Capita: %.2f\n", denpop, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Densidade Demongráfica: %.2f  -  PIB per Capita: %.2f\n", denpop2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("HOUVE EMPATE!\n");
        } else {
            printf(" CARTA 1\n");
            printf("Atributos: Densidade Demográfica: %.2f  -  PIB per Capita: %.2f\n", denpop, pibpcapita);
            printf("Valor da carta: %.2f\n", resultado3);
            printf(" CARTA 2\n");
            printf("Atributos: Densidade Demográfica: %.2f  -  PIB per Capita: %.2f\n", denpop2, pibpcapita2);
            printf("Valor da carta: %.2f\n", resultado4);
            printf("A CARTA 2 VENCEU\n");
        }}

    return 0;
    
    }