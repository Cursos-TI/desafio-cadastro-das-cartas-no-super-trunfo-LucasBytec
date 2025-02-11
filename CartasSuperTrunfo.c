#include <stdio.h>

int main(){
    char cidade[20] = " ";
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int P_turisticos = 0;
    //Declarando variáveis para cada campo que será preenchido pelo usuário

    printf("Bem-vindo(a) ao Super Trunfo de Cidades, comece preenchendo os respectivos dados:\n");

    printf("Cidade escolhida: %s\n", cidade);
    scanf(" %s", &cidade);
    printf("Nome confirmado: %s\n", cidade);
    //solicitação do preenchimento do campo Cidade e retorno do valor confirmado

    printf("\nPopulação da Cidade: %i\n", populacao);
    scanf(" %i", &populacao);
    printf("valor confirmado: %i\n", populacao);
    //solicitação do preenchimento do campo População e retorno do valor confirmado

    printf("\nÁrea da Cidade (Km²): %.1f\n", area);
    scanf(" %f", &area);
    printf("valor confirmado: %.2f\n", area);    
    //solicitação do preenchimento do campo Área e retorno do valor confirmado

    printf("\nPIB da Cidade: %.1f\n", pib);
    scanf(" %f", &pib);
    printf("valor confirmado: %.2f\n", pib);    
    //solicitação do preenchimento do campo PIB e retorno do valor confirmado

    printf("\nQuantidade de Pontos turísticos da Cidade: %i\n", P_turisticos);
    scanf(" %i", &P_turisticos);
    printf("valor confirmado: %i\n", P_turisticos);    
    //solicitação do preenchimento do campo Pontos turísticos e retorno do valor confirmado

    printf("\nOs dados da sua carta são os seguintes:\n");
    printf("\n Cidade: %s.\n População: %i.\n Área: %.2f.\n PIB: %.2f.\n Pontos turísticos: %i.\n", cidade, populacao, area, pib, P_turisticos);

    return 0;
}
