#include <stdio.h>
// Super Trunfo - Jogo de Cartas
// Este desafio consiste em criar um programa em C que simule um jogo de cartas do tipo "Super Trunfo"
int main() {
    char Estado1, Estado2, CodigodaCarta1 [20], CodigodaCarta2 [20], Nomedacidade1 [50], Nomedacidade2 [50];
    int Numerodepontosturisticos1, Numerodepontosturisticos2;
    float Area1, Area2, PIB1, PIB2, densidadepopulacao1, densidadepopulacao2, PIBpercapita1, PIBpercapita2, superPoderA, superPoderB;
    unsigned long int Populacao1, Populacao2;
    int opcao;
    
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
    printf ("Escolha o atributo para comparar as cartas: \n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Numero de pontos turisticos \n");
    printf("5 - Densidade Demografica \n");
    scanf (" %d", &opcao);

    switch(opcao) {

        case 1:
        printf("Atributo escolhido: Populacao\n");
            printf("-----------------------------------\n");
            printf("Carta 1 - %s: %lu habitantes\n", Nomedacidade1, Populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", Nomedacidade2, Populacao2);
            printf("-----------------------------------\n");
            if (Populacao1 > Populacao2) {
                printf ("Carta 1 e a vencedora! \n");
            } else if (Populacao2 > Populacao1) {
                printf ("Carta 2 e a vencedora! \n");
            } else {
                printf ("Empate! \n");
            }
            break;
    
        case 2:
            printf("Atributo escolhido: Area\n");
            printf("-----------------------------------\n");
            printf("Carta 1 - %s: %.2f km²\n", Nomedacidade1, Area1);
            printf("Carta 2 - %s: %.2f km²\n", Nomedacidade2, Area2);
            printf("-----------------------------------\n");
            if(Area1 > Area2) {
                printf("Carta 1 e a vencedora! \n");
            } else if (Area2 > Area1) {
                printf("Carta 2 e a vencedora! \n");
            } else {
                printf("Empate! \n");
            }
            break;
        
        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("-----------------------------------\n");   
            printf("Carta 1 - %s: %.2f bilhoes de reais\n", Nomedacidade1, PIB1);
            printf("Carta 2 - %s: %.2f bilhoes de reais\n", Nomedacidade2, PIB2);
            printf("-----------------------------------\n");
            if(PIB1 > PIB2) {
                printf("Carta 1 e a vencedora! \n");
            } else if (PIB2 > PIB1) {
                printf("Carta 2 e a vencedora! \n");
            } else {
                printf("Empate! \n");
            }
            break;
        case 4:
            printf("Atributo escolhido: Numero de pontos turisticos\n");
            printf("-----------------------------------\n");   
            printf("Carta 1 - %s: %d pontos turisticos\n", Nomedacidade1, Numerodepontosturisticos1);
            printf("Carta 2 - %s: %d pontos turisticos\n", Nomedacidade2, Numerodepontosturisticos2);
            printf("-----------------------------------\n");
            if(Numerodepontosturisticos1 > Numerodepontosturisticos2) {
                printf("Carta 1 e a vencedora! \n");
            } else if (Numerodepontosturisticos2 > Numerodepontosturisticos1) {
                printf("Carta 2 e a vencedora! \n");
            } else {
                printf("Empate! \n");
            }
            break;
        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("-----------------------------------\n");
            printf("Carta 1 - %s: %.2f habitantes por km²\n", Nomedacidade1, densidadepopulacao1);
            printf("Carta 2 - %s: %.2f habitantes por km²\n", Nomedacidade2, densidadepopulacao2);
            printf("-----------------------------------\n");
            if(densidadepopulacao1 < densidadepopulacao2) {
                printf("Carta 1 e a vencedora! \n");
            } else if (densidadepopulacao2 < densidadepopulacao1) {
                printf("Carta 2 e a vencedora! \n");
            } else {
                printf("Empate! \n");
            
            }
            break;

        default:
            printf("Opcao invalida! \n");
                }

    

     return 0;