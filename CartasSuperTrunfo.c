include <stdio.h>
#define texto1 "carta1"
#define texto "carta2"
int main (){
    printf("Super Trunfo\n");
    printf("%s\n",texto1);
    char estado1;
    char estado2;
    char codigo1[10];
    char codigo2[10];
    char cidade1[50];
    char cidade2[50];
    int populacao1=0;
    int populacao2=0;
    float area1=0;
    float area2=0;
    float PIB1=0;
    float PIB2=0;
    int turismo1;
    int turismo2;
    

    
    printf("digite o estado da carta:\n");
    scanf("%c",&estado1);
    printf("digite o codigo:\n");
    scanf("%s",codigo1);
    printf("digite o nome da cidade:\n");
    scanf("%s",cidade1);
    printf("população:\n");
    scanf("%d",&populacao1);
    printf("digite a área:\n");
    scanf("%f",&area1);
    printf("digite o pib:\n");
    scanf("%f",&PIB1);
    printf("numero de pontos turísticos:\n");
    scanf("%d",&turismo1);
    
    printf("%s\n",texto);
    printf("digite o estado da carta:\n");
    scanf(" %c",&estado2);
    printf("digite o codigo:\n");
    scanf("%s",codigo2);
    printf("digite o nome da cidade:\n");
    scanf(" %s",cidade2);
    printf("população:\n");
    scanf(" %d",&populacao2);
    printf("digite a área:\n");
    scanf(" %f",&area2);
    printf("digite o pib:\n");
    scanf("%f",&PIB2);
    printf("numero de pontos turísticos:\n");
    scanf(" %d",&turismo2);

    float dp =(double)populacao1/area1;
    float pc=(float)populacao1/PIB1;
    float dp2 =(double)populacao2/area2;
    float pc2=(float)populacao2/PIB2;
    printf("dados carta 1\n");
    printf("cidade : %s\n",cidade1);
    printf("população: %d\n",populacao1);
    printf("área: %.2f\n",area1);
    printf("PIB: %.2f\n",PIB1);
    printf("pontos turísticos: %d\n",turismo1);
    printf("densidade populacional: %.2f\n ",dp);
    printf("PIB por capita: %.2f\n",pc);
    
    printf("dados carta 2\n");
    printf("cidade : %s\n",cidade2);
    printf("população: %d\n",populacao2);
    printf("área: %.2f\n",area2);
    printf("PIB: %.2f\n",PIB2);
    printf("pontos turísticos: %d\n",turismo2);
    printf("densidade populacional: %.2f\n ",dp2);
    printf("PIB por capita: %.2f\n",pc2);
    return 0;
}

    
