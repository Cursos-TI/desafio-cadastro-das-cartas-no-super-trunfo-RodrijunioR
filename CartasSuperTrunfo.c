#include <stdio.h>

#include <stdio.h>
 #define texto1 "carta 1"
 #define texto2 "carta 2"
int main (){
    printf("Super Trunfo\n");
    printf("%s\n",texto1);
    char estado1;
    char estado2;
    char codigo1[10];
    char codigo2[10];
    char cidade1[50];
    char cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int turismo1;
    int turismo2;
    
    printf("digite o estado da carta :\n");
    scanf("%c", &estado1);
    printf("digite o codigo da carta:\n");
    scanf("%s",codigo1);
    printf("digite o nome da cidade:\n");
    scanf(" %s",cidade1);
    printf("população:\n");
    scanf ("%d",&populacao1);
    printf("digite a área:\n");
    scanf("%f",&area1);
    printf("digite o PIB:\n");
    scanf("%f",&pib1);
    printf("digite o numero de pontos turisticos:\n");    scanf("%d",&turismo1);
    
    printf("%s\n",texto2);
    printf("digite o estado da carta :\n");
    scanf(" %c",&estado2);
    printf("digite o codigo da carta:\n");
    scanf(" %s",codigo2);
    printf("digite o nome da cidade:\n");
    scanf("%s",cidade2);
    printf("população:\n");
    scanf(" %d", &populacao2);
    printf("digite a área:\n");
    scanf(" %f",&area2);
    printf("digite o PIB:\n");
    scanf(" %f",&pib2);
    printf("digite o numero de pontos turisticos:\n");    scanf(" %d",&turismo2);
    
    printf("dados da carta 1\n");
    printf("Estado:%c\n",estado1);
    printf("codigo da carta :%s\n",codigo1);
    printf("cidade:%s\n",cidade1);
    printf("população :%d\n",populacao1);
    printf("area:%.2f\n",area1);
    printf("PIB:%.2f\n",pib1);
    printf("pontos turisticos:%d\n",turismo1);
    
    printf("dados da carta 2\n");
    printf("Estado:%c\n", estado2);
    printf("codigo da carta :%s\n", codigo2);
    printf("cidade:%s\n", cidade2);
    printf("população :%d\n", populacao2);
    printf("area:%.2f\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("pontos turisticos:%d\n", turismo2);
 
}
