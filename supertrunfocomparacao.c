#include <stdio.h>
// Super Trunfo - Jogo de Cartas
// Este desafio consiste em criar um programa em C que simule um jogo de cartas do tipo "Super Trunfo"
int main() {
    char Estado1, Estado2, CodigodaCarta1 [20], CodigodaCarta2 [20], Nomedacidade1 [50], Nomedacidade2 [50];
    int Numerodepontosturisticos1, Numerodepontosturisticos2;
    float Area1, Area2, PIB1, PIB2, densidadepopulacao1, densidadepopulacao2, PIBpercapita1, PIBpercapita2, superPoderA, superPoderB;
    unsigned long int Populacao1, Populacao2;
    int opcao1, opcao2;
    
    // Solicitando as informações das cartas
    printf ("Digite o estado da Carta 1: \n");
    scanf (" %c", &Estado1);
    
    printf ("Digite o codigo da carta 1: \n");
    scanf(" %s", CodigodaCarta1);

    printf ("Digite o nome da Cidade da Carta 1: \n");
    scanf(" %s", Nomedacidade1);

    printf ("Digite a populacao da Cidade da Carta 1: \n");
    scanf(" %lu", &Populacao1);

    printf ("Digite a area da Cidade da Carta 1: \n");
    scanf (" %f", &Area1);

    printf ("Digite o PIB da Cidade da Carta 1: \n");
    scanf (" %f", &PIB1); 

    printf ("Digite o numero de pontos turisticos da Cidade da Carta 1: \n");
    scanf (" %d", &Numerodepontosturisticos1);

    printf ("Digite o estado da Carta 2: \n");
    scanf (" %c", &Estado2);
    
    printf ("Digite o codigo da carta 2: \n");
    scanf(" %s", CodigodaCarta2);

    printf ("Digite o nome da Cidade da Carta 2: \n");
    scanf(" %s", Nomedacidade2);

    printf ("Digite a populacao da Cidade da Carta 2: \n");
    scanf(" %lu", &Populacao2);

    printf ("Digite a area da Cidade da Carta 2: \n");
    scanf (" %f", &Area2);

    printf ("Digite o PIB da Cidade da Carta 2: \n");
    scanf (" %f", &PIB2); 

    printf ("Digite o numero de pontos turisticos da Cidade da Carta 2: \n");
    scanf (" %d", &Numerodepontosturisticos2);

    densidadepopulacao1 = Populacao1/Area1;
    densidadepopulacao2 = Populacao2/Area2;
    PIBpercapita1 = PIB1/Populacao1;
    PIBpercapita2 = PIB2/Populacao2;
    superPoderA = (float) Populacao1 + (float)Area1 + (float)PIB1 + (float)Numerodepontosturisticos1 + (float)PIBpercapita1 + (float)(1/densidadepopulacao1); 
    superPoderB = (float) Populacao2 + (float)Area2 + (float)PIB2 + (float)Numerodepontosturisticos2 + (float)PIBpercapita2 + (float)(1/densidadepopulacao2);


    // Exibindo as cartas
    printf ("Carta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Codigo da Carta: %s \n", CodigodaCarta1);
    printf ("Nome da Cidade: %s \n", Nomedacidade1);
    printf ("Populacao: %lu \n", Populacao1);
    printf ("Area: %f km²\n", Area1);   
    printf ("PIB: %f bilhoes de reais\n", PIB1);
    printf ("Numero de pontos turisticos: %d \n", Numerodepontosturisticos1);
    printf ("Densidade Populacional: %.2f habitantes por km² \n", densidadepopulacao1);
    printf ("PIB per capita: %.2f reais \n", PIBpercapita1);
    printf ("O super poder de A e: %f \n", superPoderA);

    printf ("Carta 2: \n");
    printf ("Estado: %c \n", Estado2);    
    printf ("Codigo da Carta: %s \n", CodigodaCarta2);
    printf ("Nome da Cidade: %s \n", Nomedacidade2);
    printf ("Populacao: %lu \n", Populacao2);
    printf ("Area: %f km²\n", Area2);   
    printf ("PIB: %f bilhoes de reais\n", PIB2);
    printf ("Numero de pontos turisticos: %d \n", Numerodepontosturisticos2);
    printf ("Densidade Populacional: %.2f habitantes por km² \n", densidadepopulacao2);
    printf ("PIB per capita: %.2f reais \n", PIBpercapita2);
    printf ("O super poder de B e: %f \n", superPoderB);

    printf ("*** Menu de comparação ***\n ");
    printf ("Escolha o 1 atributo para comparar as cartas: \n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Numero de pontos turisticos \n");
    printf("5 - Densidade Demografica \n");
    scanf (" %d", &opcao1);

    printf("Escolha o 2o atributo para comparar (diferente do primeiro):\n");
 
    switch (opcao1) {
        case 1:
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Numero de pontos turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 2:
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Numero de pontos turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Numero de pontos turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Demografica\n");
            break;
        case 5:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Numero de pontos turisticos\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }
 
    scanf(" %d", &opcao2);

    
     // Garantia de que opcao2 e diferente de opcao1
    if (opcao2 == opcao1) {
        printf("Erro: voce escolheu o mesmo atributo duas vezes!\n");
        return 1;
    }

    float valor1_carta1, valor1_carta2;   // atributo 1 para cada carta
    float valor2_carta1, valor2_carta2;   // atributo 2 para cada carta
    char nomeAtrib1[50], nomeAtrib2[50];
    char unidade1[30], unidade2[30];
 
    // Preenche atributo 1
    switch (opcao1) {
        case 1:
            valor1_carta1 = (float)Populacao1;
            valor1_carta2 = (float)Populacao2;
            sprintf(nomeAtrib1, "Populacao");
            sprintf(unidade1, "habitantes");
            break;
        case 2:
            valor1_carta1 = Area1;
            valor1_carta2 = Area2;
            sprintf(nomeAtrib1, "Area");
            sprintf(unidade1, "km2");
            break;
        case 3:
            valor1_carta1 = PIB1;
            valor1_carta2 = PIB2;
            sprintf(nomeAtrib1, "PIB");
            sprintf(unidade1, "bilhoes R$");
            break;
        case 4:
            valor1_carta1 = (float)Numerodepontosturisticos1;
            valor1_carta2 = (float)Numerodepontosturisticos2;
            sprintf(nomeAtrib1, "Pontos Turisticos");
            sprintf(unidade1, "pontos");
            break;
        case 5:
            valor1_carta1 = densidadepopulacao1;
            valor1_carta2 = densidadepopulacao2;
            sprintf(nomeAtrib1, "Densidade Demografica");
            sprintf(unidade1, "hab/km2");
            break;
    }
 
    // Preenche atributo 2
    switch (opcao2) {
        case 1:
            valor2_carta1 = (float)Populacao1;
            valor2_carta2 = (float)Populacao2;
            sprintf(nomeAtrib2, "Populacao");
            sprintf(unidade2, "habitantes");
            break;
        case 2:
            valor2_carta1 = Area1;
            valor2_carta2 = Area2;
            sprintf(nomeAtrib2, "Area");
            sprintf(unidade2, "km2");
            break;
        case 3:
            valor2_carta1 = PIB1;
            valor2_carta2 = PIB2;
            sprintf(nomeAtrib2, "PIB");
            sprintf(unidade2, "bilhoes R$");
            break;
        case 4:
            valor2_carta1 = (float)Numerodepontosturisticos1;
            valor2_carta2 = (float)Numerodepontosturisticos2;
            sprintf(nomeAtrib2, "Pontos Turisticos");
            sprintf(unidade2, "pontos");
            break;
        case 5:
            valor2_carta1 = densidadepopulacao1;
            valor2_carta2 = densidadepopulacao2;
            sprintf(nomeAtrib2, "Densidade Demografica");
            sprintf(unidade2, "hab/km2");
            break;
    }
 
    // ==========================================
    // COMPARACAO INDIVIDUAL (com regra invertida para densidade)
    // ==========================================
 
    // Para Densidade Demografica (opcao 5), menor valor VENCE.
    // Normalizamos: se for densidade, invertemos o sinal para poder usar
    // sempre a mesma logica "maior vence" na soma final.
    // Mas para exibicao usamos o valor real.
 
    float soma1, soma2;
 
    // Na soma, densidade contribui de forma invertida (menor densidade = maior contribuicao)
    // Para isso, usamos 1/densidade na soma, como ja era feito no superPoder original.
    // Aqui adotamos a mesma logica: atributo normal entra direto, densidade entra como 1/valor.
 
    float contrib1_carta1 = (opcao1 == 5) ? (1.0f / valor1_carta1) : valor1_carta1;
    float contrib1_carta2 = (opcao1 == 5) ? (1.0f / valor1_carta2) : valor1_carta2;
    float contrib2_carta1 = (opcao2 == 5) ? (1.0f / valor2_carta1) : valor2_carta1;
    float contrib2_carta2 = (opcao2 == 5) ? (1.0f / valor2_carta2) : valor2_carta2;
 
    soma1 = contrib1_carta1 + contrib2_carta1;
    soma2 = contrib1_carta2 + contrib2_carta2;
 
    // ==========================================
    // EXIBICAO DO RESULTADO
    // ==========================================
    printf("\n========================================\n");
    printf("       RESULTADO DA COMPARACAO\n");
    printf("========================================\n");
    printf("Cartas: %s vs %s\n", Nomedacidade1, Nomedacidade2);
 
    printf("\n--- Atributo 1: %s ---\n", nomeAtrib1);
    printf("%s: %.2f %s\n", Nomedacidade1, valor1_carta1, unidade1);
    printf("%s: %.2f %s\n", Nomedacidade2, valor1_carta2, unidade1);
 
    // Resultado do atributo 1 com operador ternario
    // Para densidade: vence quem tiver MENOR valor
    int vence_atrib1_carta1;
    if (opcao1 == 5) {
        vence_atrib1_carta1 = (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta2 < valor1_carta1 ? 2 : 0);
    } else {
        vence_atrib1_carta1 = (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta2 > valor1_carta1 ? 2 : 0);
    }
    printf("Resultado: %s\n",
        vence_atrib1_carta1 == 1 ? "Carta 1 vence neste atributo" :
        vence_atrib1_carta1 == 2 ? "Carta 2 vence neste atributo" : "Empate neste atributo");
 
    printf("\n--- Atributo 2: %s ---\n", nomeAtrib2);
    printf("%s: %.2f %s\n", Nomedacidade1, valor2_carta1, unidade2);
    printf("%s: %.2f %s\n", Nomedacidade2, valor2_carta2, unidade2);
 
    // Resultado do atributo 2 com operador ternario
    int vence_atrib2_carta1;
    if (opcao2 == 5) {
        vence_atrib2_carta1 = (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta2 < valor2_carta1 ? 2 : 0);
    } else {
        vence_atrib2_carta1 = (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta2 > valor2_carta1 ? 2 : 0);
    }
    printf("Resultado: %s\n",
        vence_atrib2_carta1 == 1 ? "Carta 1 vence neste atributo" :
        vence_atrib2_carta1 == 2 ? "Carta 2 vence neste atributo" : "Empate neste atributo");
 
    printf("\n--- Soma dos Atributos ---\n");
    printf("%s: %.4f\n", Nomedacidade1, soma1);
    printf("%s: %.4f\n", Nomedacidade2, soma2);
 
    printf("\n========================================\n");
    printf("           VENCEDOR DA RODADA\n");
    printf("========================================\n");
 
    // Resultado final com operador ternario
    printf("%s\n",
        soma1 > soma2 ? "Carta 1 e a vencedora!" :
        soma2 > soma1 ? "Carta 2 e a vencedora!" : "Empate!");
 
    printf("========================================\n");
 
    return 0;
}