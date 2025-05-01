#include <stdio.h>

int main(){

char estado[25] = "amapa";
char codigodacarta[15] = "A";
char nomedacidade[50] = "A02";
int populacao = 4000;
float area = 2.400;
float pib = 3.500;
int pontosturisticos = 780;

printf("o nome do estado e:%s\n", estado);
printf("o codigo da carta e:%s\n", codigodacarta);
printf("o nome dacidade e:%s\n", nomedacidade);
printf("a populacao e:%d\n", populacao);
printf("a area e:%.3f", area);
printf("o pib e:%.3f\n", pib);
printf("pontosturisticos e:%d\n", pontosturisticos);

return 0;


}