#include <stdio.h>

int main() {
    //variáveis da primeira carta
    char codigoCidade1[] = "A01";
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //pegando as informações do usário
    //Nome
    printf("Qual o nome da primeira cidade: ");
    scanf("%s",nome1);
    //População
    printf("Qual a populacao da primeira cidade: ");
    scanf("%d",&populacao1);
    //Área
    printf("Qual a area da primeira cidade (em quilometros quadrados): ");
    scanf("%f",&area1);
    //PIB
    printf("Qual o PIB da primeira cidade: ");
    scanf("%f",&pib1);
    //Pontos turísticos
    printf("Quantos pontos turisticos a primeira cidade tem para visitar: ");
    scanf("%d",&pontosTuristicos1);
    //calculando a densidade populacional e o pib per capto
    float densidadePopulacional1 = populacao1 / area1;
    float pibPercapto1 = pib1 / populacao1;
    //super poder da primeira cidade
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPercapto1;
    //imprimindo os dados
    printf("---------------------------------------------------------------------------\n");
    printf("Os dados da primeira cidade sao:\n");
    printf("O codigo da carta e: %s\n",codigoCidade1);
    printf("O nome da cidade e: %s\n",nome1);
    printf("A populacao e: %d habitantes\n",populacao1);
    printf("A area e: %.2f quilometros quadrados\n",area1);
    printf("O PIB da cidade e: %.2f\n",pib1);
    printf("A cidade tem : %d pontos turisticos\n",pontosTuristicos1);
    printf("A densidade populacional e de: %.2f pessoas por quilometros quadrados\n",densidadePopulacional1);
    printf("O PIB percapto da cidade e: %.2f reais por habitantes\n",pibPercapto1);
    printf("O superpoder da cidade e: %.2f reais por habitantes\n",superPoder1);
    printf("---------------------------------------------------------------------------\n");
    //variáveis da segunda ciade
    char codigoCidade2[] = "A02";
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Nome
    printf("Qual o nome da segunda cidade: ");
    scanf("%s",nome2);
    //População
    printf("Qual a populacao da segunda cidade: ");
    scanf("%d",&populacao2);
    //Área
    printf("Qual a area da segunda cidade (em quilometros quadrados): ");
    scanf("%f",&area2);
    //PIB
    printf("Qual o PIB da segunda cidade: ");
    scanf("%f",&pib2);
    //Pontos turísticos
    printf("Quantos pontos turisticos a segunda cidade tem para visitar: ");
    scanf("%d",&pontosTuristicos2);
    //calculando a densidade populacional e o pib per capto
    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapto2 = pib2 / populacao2;
    //super poder da segunda cidade
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPercapto2;

    //imprimindo dados da segunda
    printf("---------------------------------------------------------------------------\n");
    printf("Os dados da segunda cidade sao:\n");
    printf("O codigo da carta e: %s\n",codigoCidade2);
    printf("O nome da cidade e: %s\n",nome2);
    printf("A populacao e: %d habitantes\n",populacao2);
    printf("A area e: %.2f quilometros quadrados\n",area2);
    printf("O PIB da cidade e: %.2f\n",pib2);
    printf("A cidade tem : %d pontos turisticos\n",pontosTuristicos2);
    printf("A densidade populacional e de: %.2f pessoas por quilometros quadrados\n",densidadePopulacional2);
    printf("O PIB percapto da cidade e: %.2f reais por habitantes\n",pibPercapto2);
    printf("O superpoder da cidade e: %.2f reais por habitantes\n",superPoder2);
    printf("---------------------------------------------------------------------------\n");

    //verificações
    int escolha;
    printf("Escolha qual atributo deseja comparar: \n 0 - populacao\n 1 - area\n 2 - pib\n 3 - pontos turisticos\n 4 - densidade populaciona\n 5 - pib per capito\n 6 - super poder\n");
    scanf("%d",&escolha);
    printf("----------------------------------------------------------------------------\n");
    printf("Você escolheu: %d\n",escolha);
    //resultados
    if(escolha == 0){
        printf("A populacao da cidade %s e: %d e a populacao da cidade %s e: %d\n",nome1,populacao1,nome2,populacao2);
        if(populacao1 > populacao2){
            printf("A populacao da %s e maior que a populacao da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(populacao1 == populacao2){
            printf("Empate");
        }else{
            printf("A populacao da %s e maior que a populacao da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }
    if(escolha == 1){
        printf("A area da cidade %s e: %.2f e a area da cidade %s e: %.2f\n",nome1,area1,nome2,area2);
        if(area1 > area2){
            printf("A area da %s e maior que a area da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(area1 == area2){
            printf("Empate");
        }else{
            printf("A area da %s e maior que a area da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }
    if(escolha == 2){
        printf("O pib da cidade %s e: %.2f e o pib da cidade %s e: %.2f\n",nome1,pib1,nome2,pib2);
        if(pib1 > pib2){
            printf("O pib da %s e maior que o pib da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(pib1 == pib2){
            printf("Empate");
        }else{
            printf("O pib da %s e maior que o pib da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }
    if(escolha == 3){
        printf("Os pontos turisticos da cidade %s e: %d e os pontos turisticos da cidade %s e: %d\n",nome1,pontosTuristicos1,nome2,pontosTuristicos2);
        if(pontosTuristicos1 > pontosTuristicos2){
            printf("OS pontos turisticos da %s e maior que os pontos turisticos da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(pontosTuristicos1 == pontosTuristicos2){
            printf("Empate");
        }else{
            printf("OS pontos turisticos da %s e maior que os pontos turisticos da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }
    if(escolha == 4){
        printf("A densidade populacional da cidade %s e: %.2f a densidade populacional da cidade %s e: %.2f\n",nome1,densidadePopulacional1,nome2,densidadePopulacional2);
        if(densidadePopulacional1 < densidadePopulacional2){
            printf("A densidade populacional da %s e maior que a densidade populacional da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(densidadePopulacional1 == densidadePopulacional2){
            printf("Empate");
        }else{
            printf("A densidade populacional da %s e maior que a densidade populacional da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }
    if(escolha == 5){
        printf("O pib per capto da cidade %s e: %.2f e o pib per capto da cidade %s e: %.2f\n",nome1,pibPercapto1,nome2,pibPercapto2);
        if(pibPercapto1 > pibPercapto2){
            printf("O pib per capto da %s e maior que o pib  per capto da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(pibPercapto1 == pibPercapto2){
            printf("Empate");
        }else{
            printf("O pib per capto da %s e maior que o pib per capto da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }
    if(escolha == 6){
        printf("O super poder da cidade %s e: %.2f e o super poder da cidade %s e: %.2f\n",nome1,superPoder1,nome2,superPoder2);
        if(superPoder1 > superPoder2){
            printf("O super poder da %s e maior que o super poder da cidade %s\n A vencedora e: %s",nome1,nome2,nome1);
        }else if(superPoder1 == superPoder2){
            printf("Empate");
        }else{
            printf("O super poder da %s e maior que o super poder da cidade %s\n A vencedora e: %s",nome2,nome1,nome2);
        }
    }

    return 0;
}
