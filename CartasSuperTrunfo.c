#include <stdio.h>

int main(){
    //a seguir as funções e variáveis referentes a primeira carta.

    char estado = 'A'; //função char para informar a letra da carta que representa o estado.
    char codigo[4] ="A01"; //função char para informar o código da carta.
    char cidade[20]; //função char para comportar os caracteres que nomeiam a cidade.
    int populacao; //função int para comportar o número da população.
    float area; //função float para comportar a extensão do território da cidade.
    float pib; //função float para alocar o pib.
    int pontos_turisticos; //função int para alocar a quantidade de pontos turísticos
    
    //a seguir as funções e variáveis referentes a segunda carta carta

    char estado2 = 'B'; //função char para informar a letra da carta que representa o estado diferenciada da primeira pelo digito 2.
    char codigo2[4] ="B02"; //função char para informar o código da carta diferenciada da primeira pelo digito 2.
    char cidade2[20]; //função char para comportar os caracteres que nomeiam a cidade diferenciada da primeira pelo digito 2.
    int populacao2; //função int para comportar o número da população diferenciada da primeira pelo digito 2.
    float area2; //função float para comportar a extensão do território da cidade diferenciada da primeira pelo digito 2.
    float pib2; //função float para alocar o pib diferenciada da primeira pelo digito 2.
    int pontos_turisticos2; //função int para alocar a quantidade de pontos turísticos diferenciada da primeira pelo digito 2.
    
  
   //a seguir os comandos de entrada e saída do terminal referentes a primeira carta.

   printf("Informe a cidade: \n"); //função que pede que o usuário informa qual a cidade.
   scanf("%s", &cidade); //função para captar o dado inserido pelo usuário.

   printf("Informe a população: \n"); //função que pede que o usuário informe a população.
   scanf("%d", &populacao); //função para captar o dado inserido pelo usuário.

   printf("Informe a área: \n"); //função que pede que o usuário informe a área.
   scanf("%f", &area); //função para captar o dado inserido pelo usuário.

   printf("Informe o PIB: \n"); //função que pede que o usuário informe o pib.
   scanf("%f", &pib); //função para captar o dado inserido pelo usuário.

   printf("Informe quantos pontos turísticos: \n"); //função que pede que o usuário informe os pontos turísticos.
   scanf("%f", &pontos_turisticos); //função para captar o dado inserido pelo usuário.

   printf(" - Estado: %c\n - Codigo: %s\n - Cidade: %s\n", estado, codigo, cidade); //função para o sistema imprimir no terminal os dados da carta referente ao estado, o código e a cidade. 

   printf(" - População: %d\n - Area: %f\n - PIB: %f\n - Total de Pontos Turísticos: %d\n", populacao, area, pib, pontos_turisticos); //função para o sistema imprimir no terminal os dados da carta referente a população, área, pib e total de pontos turísticos.

   

   //a seguir os comandos de entrada e saída do terminal referentes a segunda carta.

   printf("Informe a cidade: \n"); //função que pede que o usuário informa qual a segunda cidade.
   scanf("%s", &cidade2); //função para captar o dado inserido pelo usuário da segunda cidade.

   printf("Informe a população: \n"); //função que pede que o usuário informe a população da segunda cidade.
   scanf("%d", &populacao2); //função para captar o dado inserido pelo usuário da segunda cidade.

   printf("Informe a área: \n"); //função que pede que o usuário informe a área da segunda cidade.
   scanf("%f", &area2); //função para captar o dado inserido pelo usuário da segunda cidade.

   printf("Informe o PIB: \n"); //função que pede que o usuário informe o pib da segunda cidade.
   scanf("%f", &pib2); //função para captar o dado inserido pelo usuário da segunda cidade.

   printf("Informe quantos pontos turísticos: \n"); //função que pede que o usuário informe os pontos turísticos da segunda cidade.
   scanf("%f", &pontos_turisticos2); //função para captar o dado inserido pelo usuário da segunda cidade.

   printf(" - Estado: %c\n - Codigo: %s\n - Cidade: %s\n", estado2, codigo2, cidade2); //função para o sistema imprimir no terminal os dados da segunda carta referente ao estado, o código e a cidade
   printf(" - População: %d\n - Area: %f\n - PIB: %f\n - Total de Pontos Turísticos: %d\n", populacao2, area2, pib2, pontos_turisticos2); //função para o sistema imprimir no terminal os dados da carta referente a população, área, pib e total de pontos turísticos da segunda cidade.
   

}