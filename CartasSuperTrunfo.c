#include <stdio.h>

int main(){

    char Estado [50], Estado1 [50];
    char Codigo [50], Codigo1 [50];
    char Cidade [50]; 
    char Cidade1 [50];

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
     //Para a população em milhoes no cadastro nao usar pontos pois nessa funçao não lê.

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    printf("Digite a area em km2: \n");
    scanf("%f", &Km);

    /*Para km colocar apenas os primeiros numeros antes do ponto ex: Area em km2: 7.0000  coloquei apenas o 7 
    para numeros de area maior escrever a quantidade ex: 745 ira aparecer 745.0000.*/

    printf("Digite o PIB (Produto Interno Bruto): \n");
    scanf("%f", &PIB);

    //Cadastro da segunda carta
    
    printf("Digite o Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &Codigo1);

    printf("Digite o numero populacional: \n");
    scanf("%d", &Populacao1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos1);

    printf("Digite a area em km2: \n");
    scanf("%f", &Km1);

    printf("Digite o PIB (Produto Interno Bruto): \n");
    scanf("%f", &PIB1);

    //Imprimi informações carta 1

    printf("Nome do Estado: %s\n", Estado);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Codigo da Carta: %s\n", Codigo);
    printf("Populacao Aproximada: %d\n", Populacao);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos);
    printf("Area em km2: %.3f\n", Km);
    printf("Produto interno Bruto (PIB): %.3f\n", PIB);

    //Imprimi informações carta 2

    printf("Nome do Estado: %s\n", Estado1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Populacao Aproximada: %d\n", Populacao1);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);
    printf("Area em km2: %.3f\n", Km1);
    printf("Produto interno Bruto (PIB): %.3f\n", PIB1);

    // Obs: utilizei ".3" na função %f, pois numa aula vi que diminui casas decimais.
    
    return 0;
}