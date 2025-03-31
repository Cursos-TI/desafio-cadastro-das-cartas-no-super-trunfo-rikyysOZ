#include <stdio.h>
int main(){

    /*nomenclaturas terminadas em 1 serão todas atribuidas ao cadastro 1 de carta
     nomenclaturas terminadas em 2 serão todas atribuidas ao cadastro 2 de carta */
    int Pt_turistico1, Pt_turistico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2, Densidade_populacional1, Densidade_populacional2, PIB_Percapta1, PIB_Percapta2;
    float Super_poder1, Super_poder2; 
    char CodigoCarta1[4],CodigoCarta2[4], estado1, estado2, NomeCidade1[30], NomeCidade2[30];
    char vencedor[] = {'2', '1'}; // índice 0 = Carta 2, índice 1 = Carta 1
    int ResPopulacao, ResArea, ResPIB, ResTuristico, ResPercapta, ResDesnsidade, ResPoder; //resultado dos comparativos
    
    printf("------------------------------------------\n");
    printf("Cadastro de cartas para o super trunfo\n");
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
    scanf("%s", &CodigoCarta2);
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
    
    //calcula a soma de todos os valores numerais formando um Super poder para a carta, 1 sobre densidade popupalacional para iverte 
    Super_poder1 = (float)populacao1+area1+PIB1+Pt_turistico1+PIB_Percapta1+(1/Densidade_populacional1);
    Super_poder2 = (float)populacao2+area2+PIB2+Pt_turistico2+PIB_Percapta2+(1/Densidade_populacional2);
        
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
    printf("\nPIB per Capita: %.2f reais\n", PIB_Percapta2);

    //execulta a comparação das caracteristicas das cartas e armazena os resultados
    ResPopulacao = populacao1>populacao2;
    ResArea = area1 > area2;
    ResPIB = PIB1 > PIB2;
    ResTuristico = Pt_turistico1 > Pt_turistico2;
    ResPercapta = PIB_Percapta1 > PIB_Percapta2;
    ResDesnsidade = Densidade_populacional1 < Densidade_populacional2;
    ResPoder = Super_poder1 > Super_poder2;

    printf("\n-*-*-*-*-*-*-*-*-*-comparação de Cartas-*-*-*-*-*-*-*-*-*-\n");
    //imprimi o resultado  da comparação de cartas
    printf("\nPopulação: carta %c venceu (%d)",vencedor[ResPopulacao], ResPopulacao);
    printf("\nArea: carta %c venceu (%d)",vencedor[ResArea], ResArea);
    printf("\nPIB: carta %c venceu (%d)",vencedor[ResPIB], ResPIB);
    printf("\nPontos Turísticos: carta %c venceu (%d)",vencedor[ResTuristico], ResTuristico);
    printf("\nDensidade Populacional: carta %c venceu (%d)",vencedor[ResDesnsidade], ResDesnsidade);
    printf("\nPIB per Capita: carta %c venceu (%d)",vencedor[ResPercapta], ResPercapta);
    printf("\nSuper Poder: carta %c venceu (%d)",vencedor[ResPoder], ResPoder);

}
