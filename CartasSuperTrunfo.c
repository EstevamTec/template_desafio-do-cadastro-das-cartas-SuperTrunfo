#include <stdio.h>

int main(){
    char Estado [50], Estado1 [50];
    char Codigo [50], Codigo1 [50];
    char Cidade [50], char Cidade1 [50];
    
/*Para usar Char sempre coloque [] e a quantidade que precisar usar ex: [50], se nao colocar 
    não vai imprimir na hora de rodar o codigo.*/

    int Populacao, Populacao1, Pontos_Turisticos, Pontos_Turisticos1;
    float Km, Km1, PIB, PIB1;

    // Cadastro primeira carta
    
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);

    printf("Digite da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o numero populacional: \n");
    scanf("%d", &Populacao);