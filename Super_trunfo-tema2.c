#include <stdio.h>
int main(){

    /*nomenclaturas terminadas em 1 serão todas atribuidas ao cadastro 1 de carta
     nomenclaturas terminadas em 2 serão todas atribuidas ao cadastro 2 de carta */
    int populacao1, populacao2, Pt_turistico1, Pt_turistico2, EscolhaComparacao1, EscolhaComparacao2, resultado1, resultado2;
    float area1, area2, PIB1, PIB2, Densidade_populacional1, Densidade_populacional2, PIB_Percapta1, PIB_Percapta2, somaAtributosCarta1, somaAtributosCarta2; 
    char CodigoCarta1[4],CodigoCarta2[4], estado1, estado2, NomeCidade1[30], NomeCidade2[30];
    
    
    printf("------------------------------------------\n");
    printf("  Cadastro de cartas para o super trunfo\n");
    printf("------------------------------------------\n");

     //Coleta de informações referente a carta 1
    printf("\nCadastro carta 1:");
    printf("\nDigite Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%c", &estado1);
    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &CodigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &NomeCidade1);
    printf("Numero de habitantes da cidade: ");
    scanf("%i", &populacao1);
    printf("Area da cidade em Km²: ");
    scanf("%f", &area1);
    printf("Produto interno bruto da cidade: ");
    scanf("%f", &PIB1);
    printf("Quantidade de pontos turisticos: ");
    scanf("%i", &Pt_turistico1);

    //coleta de informações referente a carta 2
    printf("\nCadastro carta 2:");
    printf("\nDigite Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);
    printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", &CodigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &NomeCidade2);
    printf("Numero de habitantes da cidade: ");
    scanf("%i", &populacao2);
    printf("Area da cidade em Km²: ");
    scanf("%f", &area2);
    printf("Produto interno bruto da cidade: ");
    scanf("%f", &PIB2);
    printf("Quantidade de pontos turisticos: ");
    scanf("%i", &Pt_turistico2);
    
    //calcula a Densidade Populacional das cartas      
    Densidade_populacional1 = (float)populacao1 / area1;
    Densidade_populacional2 = (float)populacao2 / area2;

    //calcula o PIB per Capta das cartas
    PIB_Percapta2 = (float)PIB2 / populacao2;
    PIB_Percapta1 = (float)PIB1 / populacao1;   

    //Imprimi as informções referentes a carta 1
    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCodigo: %s", CodigoCarta1);
    printf("\nNome da cidade: %s", NomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nArea: %.2f Km²", area1);
    printf("\nPIB: R$%.2f bilhões de reias", PIB1);
    printf("\nNumero de pontos turisticos: %d", Pt_turistico1);
    printf("\nDensidade Populacional: %.2fHab/Km²", Densidade_populacional1);
    printf("\nPIB per Capita: %.2f reais", PIB_Percapta1);
    
    printf("\n");

    //Imprimi as informções referentes a carta 2
    printf("\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCodigo: %s", CodigoCarta2);
    printf("\nNome da cidade: %s", NomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nArea: %.2f Km²", area2);
    printf("\nPIB: R$%.2f bilhões de reais", PIB2);
    printf("\nNumero de pontos turisticos: %d", Pt_turistico2);
    printf("\nDensidade Populacional: %.2fHab/Km²", Densidade_populacional2);
    printf("\nPIB per Capita: %.2f reais", PIB_Percapta2);

    printf("\n");
   //switch para primeira escolha de comparação de parametro
    printf("------------------------------------------\n");
    printf("    Escolha qual atributo deseja comparar\n");
    printf("------------------------------------------\n");
    printf("\n[1] - Nome do pais\n[2] - População\n[3] - Area\n[4] - PIB\n[5] - Numero de pontos turisiticos\n[6] - Densidade demografica");
    printf("\n Digite uma das opções: ");
    scanf("%d", &EscolhaComparacao1);

    printf("\n");
    //switch para segunda escolha de comparação de parametro    
    printf("-------------------------------------------------\n");
    printf("    Escolha o segundo atributo deseja comparar\n");
    printf("-------------------------------------------------\n");
    printf("\n[1] - Nome do pais\n[2] - População\n[3] - Area\n[4] - PIB\n[5] - Numero de pontos turisiticos\n[6] - Densidade demografica");
    printf("\n Digite uma das opções: ");
    scanf("%d", &EscolhaComparacao2);    

    //compração de cada atributo de acordo com a escolha referente ao primeiro comparativo
    switch (EscolhaComparacao1)
    {
    case 1:
        printf("\n\nInformações das cartas:");
        printf("\nCarta 1 - %s\nCarta 2 - %s", NomeCidade1, NomeCidade2);                
        break;
    case 2:
        printf("\n\nComparação das Cartas atributo População:");
        printf("\nCarta 1 - %s: %i População\nCarta 2 - %s: %i População", NomeCidade1, populacao1, NomeCidade2, populacao2);  
        resultado1 = (populacao1 > populacao2) ? 1: 0;
        somaAtributosCarta1 += (float)populacao1;
        somaAtributosCarta2 += (float)populacao2;           
        break;
    case 3:
        printf("\n\nComparação das Cartas atributo Area:");
        printf("\nCarta 1 - %s: %.2fKm²\nCarta 2 - %s: %.2fKm²", NomeCidade1, area1, NomeCidade2, area2);
        resultado1 = (area1 > area2) ? 1: 0;
        somaAtributosCarta1 += area1;
        somaAtributosCarta2 += area2;   
        break;
    case 4:
        printf("\n\nComparação das Cartas atributo PIB:");
        printf("\nCarta 1 - %s: R$%.2f PIB\nCarta 2 - %s: R$%.2f PIB", NomeCidade1, PIB1, NomeCidade2, PIB2);
        resultado1 = (PIB1 > PIB2) ? 1: 0;
        somaAtributosCarta1 += PIB1;
        somaAtributosCarta2 += PIB2;    
        break;
    case 5:
        printf("\n\nComparação das Cartas atributo Pontos turisticos:");
        printf("\nCarta 1 - %s: %i Pontos turisiticos\nCarta 2 - %s: %i Pontos turisiticos", NomeCidade1, Pt_turistico1, NomeCidade2, Pt_turistico2);
        resultado1 = (Pt_turistico1 > Pt_turistico2) ? 1: 0;
        somaAtributosCarta1 += Pt_turistico1;
        somaAtributosCarta2 += Pt_turistico2;   
        break;
    case 6:
        printf("\n\nComparação das Cartas atributo Densidade demografica:");
        printf("\nCarta 1 - %s: %i Hab/Km²\nCarta 2 - %s: %i Hab/Km²", NomeCidade1, Densidade_populacional1, NomeCidade2, Densidade_populacional2);
        resultado1 = (Densidade_populacional1 < Densidade_populacional2) ? 1: 0;
        somaAtributosCarta1 += Densidade_populacional1;
        somaAtributosCarta2 += Densidade_populacional1;   
        break;
    default:
        printf("Opção invalida");
        break;
    }
    
    if (EscolhaComparacao1 == EscolhaComparacao2)//faz a verificação se é o mesmo atributo que essta sendo comparado
    {
        printf("erro Atributos comparados iguais");
    }
    else{        
        //compração de cada atributo de acordo com a escolha referente ao segundo comparativo
        switch (EscolhaComparacao2){
            
        case 1:
            printf("\n\nInformações das cartas:");
            printf("\nCarta 1 - %s\nCarta 2 - %s", NomeCidade1, NomeCidade2);                    
            break;
        case 2:
            printf("\n\nComparação das Cartas atributo População:");
            printf("\nCarta 1 - %s: %i População\nCarta 2 - %s: %i População", NomeCidade1, populacao1, NomeCidade2, populacao2);  
            resultado2 = (populacao1 > populacao2) ? 1: 0;
            somaAtributosCarta1 += (float)populacao1;
            somaAtributosCarta2 += (float)populacao2;        
            break;
        case 3:
            printf("\n\nComparação das Cartas atributo Area:");
            printf("\nCarta 1 - %s: %.2fKm²\nCarta 2 - %s: %.2fKm²", NomeCidade1, area1, NomeCidade2, area2);
            resultado2 = (area1 > area2) ? 1: 0;
            somaAtributosCarta1 += area1;
            somaAtributosCarta2 += area2;
            break;
        case 4:
            printf("\n\nComparação das Cartas atributo PIB:");
            printf("\nCarta 1 - %s: R$%.2f PIB\nCarta 2 - %s: R$%.2f PIB", NomeCidade1, PIB1, NomeCidade2, PIB2);
            resultado2 = (PIB1 > PIB2) ? 1: 0;
            somaAtributosCarta1 += PIB1;
            somaAtributosCarta2 += PIB2; 
            break;
        case 5:
            printf("\n\nComparação das Cartas atributo Pontos turisticos:");
            printf("\nCarta 1 - %s: %i Pontos turisiticos\nCarta 2 - %s: %i Pontos turisiticos", NomeCidade1, Pt_turistico1, NomeCidade2, Pt_turistico2);
            resultado2 = (Pt_turistico1 > Pt_turistico2) ? 1: 0;
            somaAtributosCarta1 += Pt_turistico1;
            somaAtributosCarta2 += Pt_turistico2;
            break;
        case 6:
            printf("\n\nComparação das Cartas atributo Densidade demografica:");
            printf("\nCarta 1 - %s: %i Hab/Km²\nCarta 2 - %s: %i Hab/Km²", NomeCidade1, Densidade_populacional1, NomeCidade2, Densidade_populacional2);
            resultado2 = (Densidade_populacional1 < Densidade_populacional2) ? 1: 0;
            somaAtributosCarta1 += Densidade_populacional1;
            somaAtributosCarta2 += Densidade_populacional2;
            break;
        default:
            printf("Opção invalida");
            break;
            }
        }

    if (somaAtributosCarta1==somaAtributosCarta2)
    {
        printf("\n\nSoma dos atributos selecionados\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f",
            NomeCidade1, somaAtributosCarta1, NomeCidade2, somaAtributosCarta2);
        printf("\nOcorreu um Empate");
    }
    
        
    else if (resultado1&&resultado2)// verifica se houve um vencedor
    {
        printf("\n\nSoma dos atributos selecionados\nCarta 1 - %s: %.2f Soma dos atributos selecionados\nCarta 2 - %s: %.2f",
                NomeCidade1, somaAtributosCarta1, NomeCidade2, somaAtributosCarta2);
            
        if (resultado1 == 1 && resultado2 == 1)//verifica se o vencedor foi a carta 1 em ambos os atributos
        {
        printf("Carta 1 venceu !");
        }
        else
        {        
        printf("Carta 2 venceu !");
        }
    }
    else 
    {
        printf("\n\nSoma dos atributos selecionados\nCarta 1 - %s: %.2f \nCarta 2 - %s: %.2f",
                NomeCidade1, somaAtributosCarta1, NomeCidade2, somaAtributosCarta2);

        if (somaAtributosCarta1>somaAtributosCarta2)
        {
        printf("\ncarta 1 venceu!");
        }
        else if (somaAtributosCarta1 < somaAtributosCarta2)
        {
        printf("\nCarta 2 venceu!");
        }                
        else
        {
        printf("\nOcorreu empate!");
        }
    
    }
    
}

       

