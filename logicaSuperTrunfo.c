#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int pop, pop2,opcao;
    float area, area2, dp,dp2, pib,pib2, pibper,pibper2,tot;
    int pt,pt2;

    dp = pop / area;
    pibper = pib / pop;

    tot = pop<=pop2;

    dp2 = pop2 / area2;
    pibper2 = pib2 / pop2;
    
    printf("Menu Principal\n");
    printf("1. cadastro carta 1 \n");
     printf("2. cadastro carta 2\n");
     printf("3. ver cartas\n");
     printf("4. comparacao cartas\n");
     printf("5. sair\n");
     printf("Escolha uma opção: ");
     scanf("%d", &opcao);
    switch (opcao)
    {
    case 1 :
        printf("Digite a populacao: ");
        scanf("%d", &pop);
        printf("Sua populacao: %d\n", pop);

        printf("Digite a area: ");
        scanf("%f", &area);
        printf("Sua area: %.2f\n", area);
    
        printf("Digite O PIB(soma dos bens): ");
        scanf("%f", &pib);
        printf("PIB: %.2f\n", pib);
    
        printf("Digite quantos pontos turisticos existe: ");
        scanf("%d", &pt);
        printf("Seu ponto turistico: %d\n", pt);
    
    
        break;
    case 2:
        printf("Digite a populacao: ");
        scanf("%d", &pop2);
        printf("Sua populacao: %d\n", pop2);

        printf("Digite a area: ");
        scanf("%f", &area2);
        printf("Sua area: %.2f\n", area2);
    
        printf("Digite O PIB(soma dos bens): ");
        scanf("%f", &pib2);
        printf("PIB: %.2f\n", pib2);
    
        printf("Digite quantos pontos turisticos existe: ");
        scanf("%d", &pt2);
        printf("Seu ponto turistico: %d\n", pt2);
        break;
    case 3:
        printf("**carta 1**\n populacao:%d \n area:%.2f \n PIB: %.2f \n pontos turistico:%d \n Densidade Populacional: %.2f \n PIB per Capita %.2f\n", pop , area, pib, pt, dp,pibper);
        printf("**carta 2**\n populacao:%d \n area:%.2f \n PIB: %.2f \n pontos turistico:%d \n Densidade Populacional: %.2f \n PIB per Capita %.2f\n", pop2, area2, pib2, pt2, dp2,pibper2);
        break;
    case 4:
        if(pop>pop2){
        printf("a cidade 1 tem a populacao maior\n");
        } else{
            printf("a cidade 2 tem a populacao maior\n");
        }

        if(area>area2){
            printf("a cidade 1 tem a area maior\n");
        } else{
            printf("a cidade 2 tem a area maior\n");
        }

        if(pib>pib2){
            printf("a cidade 1 tem a soma de bens maior\n");
        } else{
            printf("a cidade 2 tem a soma de bens maior\n");
        }
        break;
    
    default:
        break;
    }
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
