#include <stdio.h>

int main(){
    
    char Estado1;
    char Estado2;
    char Codigo1[10];
    char Codigo2[10];
    char Cidade1[20];
    char Cidade2[20];
    float PIB1;
    float PIB2;
    float Area1;
    float Area2;
    long int Populacao1;
    long int Populacao2;
    int Pontosturisticos1;
    int Pontosturisticos2;
    float Densidade1;
    float Densidade2;
    float Renda1;
    float Renda2;
    long int Superpoder1;
    long int Superpoder2;
    int opcao;

    printf("Insira o Estado:\n");
    scanf("%c", &Estado1);

    printf("Insira o Código:\n");
    scanf("%s", &Codigo1);

    printf("Insira a Cidade:\n");
    scanf("%s", &Cidade1);

    printf("Insira o PIB:\n");
    scanf("%f", &PIB1);

    printf("Insira a Área:\n");
    scanf("%f", &Area1);

    printf("Insira a População:\n");
    scanf("%d", &Populacao1);

    printf("Insira os Pontos Turísticos:\n");
    scanf("%ld", &Pontosturisticos1);

    Densidade1 = ( Populacao1 / Area1);

    Renda1 = ( PIB1 / Populacao1);

    Superpoder1 = (Populacao1 + (int)PIB1 + (int)Area1 + Pontosturisticos1);

    printf("Você Inseriu:\n");
    printf("Estado:%c\n", Estado1);
    printf("Codigo:%s\n", Codigo1);
    printf("Cidade:%s\n", Cidade1);
    printf("PIB:%.3f milhões\n", PIB1);
    printf("Área:%.3f Km²\n", Area1);
    printf("População:%ld milhões\n", Populacao1);
    printf("Pontos Turísticos:%d\n", Pontosturisticos1);
    printf("Densidade:%f hab/km²\n", Densidade1);
    printf("Renda per capita:%f reais\n", Renda1);
    printf("Super Poder:%ld\n", Superpoder1);

    
    printf("Insira o Estado:\n");
    scanf(" %c", &Estado2);

    printf("Insira o Código:\n");
    scanf(" %s", &Codigo2);

    printf("Insira a Cidade:\n");
    scanf(" %s", &Cidade2);

    printf("Insira o PIB:\n");
    scanf(" %f", &PIB2);

    printf("Insira a Área:\n");
    scanf(" %f", &Area2);

    printf("Insira a População:\n");
    scanf(" %ld", &Populacao2);

    printf("Insira os Pontos Turísticos:\n");
    scanf(" %d", &Pontosturisticos2);

    Densidade2 = ( Populacao2 / Area2);

    Renda2 = ( PIB2 / Populacao2);

    Superpoder2 = (Populacao2 + (int)PIB2 + (int)Area2 + Pontosturisticos2);

    printf("Você Inseriu:\n");
    printf("Estado:%c\n", Estado2);
    printf("Codigo:%s\n", Codigo2);
    printf("Cidade:%s\n", Cidade2);
    printf("PIB:%.3f milhões\n", PIB2);
    printf("Área:%.3f Km²\n", Area2);
    printf("População:%ld milhões\n", Populacao2);
    printf("Pontos Turísticos:%d\n", Pontosturisticos2);
    printf("Densidade:%f hab/km²\n", Densidade2);
    printf("Renda per capita:%f reais\n", Renda2);
    printf("Super Poder:%ld\n", Superpoder2);

    //comparação das cartas

    printf("Escolha qual atributo você gostaria de comparar.\n");
    printf("1.PIB.\n");
    printf("2.Área.\n");
    printf("3.População.\n");
    printf("4.Pontos Turísticos.\n");
    printf("5.Densidade.\n");
    printf("6.Renda per capita.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Comparando PIB:\n");
        if (PIB1 > PIB2)
        { 
        printf("Carta 1 Ganhou!\n");
        } else if (PIB1 < PIB2)
        {
        printf("Carta 2 Ganhou!\n");
        }
        break;
    case 2: 
        printf("Comparando Área:\n");
        if (Area1 > Area2)
        {
        printf("Carta 1 Ganhou!\n");
        } else if (Area1 < Area2)
        {
        printf("Carta 2 Ganhou!\n");
        }
        break;
    case 3: 
        printf("Comparando População:\n");
        if (Populacao1 > Populacao2)
        {
        printf("Carta 1 Ganhou!\n");
        } else if (Populacao1 < Populacao2)
        {
        printf("Carta 2 Ganhou\n");
        }
        break;
    case 4: 
        printf("Comparando Pontos Turísticos:\n");
        if (Pontosturisticos1 > Pontosturisticos2)
        {
        printf("Carta 1 Ganhou!\n");
        } else if (Pontosturisticos1 < Pontosturisticos2)
        {
        printf("Carta 2 Ganhou!\n");
        }
        break;
    case 5: 
        printf("Comparando Densidade:\n");
        if (Densidade1 < Densidade2)
        {
        printf("Carta 1 Ganhou!\n");
        } else if (Densidade1 > Densidade2)
        {
        printf("Carta 2 Ganhou!\n");
        }
        break;
    case 6: 
        printf("Comparando Renda PerCapita.\n");
        if (Renda1 > Renda2)
        {
        printf("Carta 1 Ganhou!\n");
        } else if (Renda1 < Renda2)
        {
        printf("Carta 2 Ganhou!\n");
        }
    default:
    printf("Opção Inválida.");
        break;
    }

}