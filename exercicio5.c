#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que leia dois valores inteiros  a e b sendo b > a. 
Em seguida o programa deverá ler 7 outros valores inteiros.
Dentre os 7 valores digitados:
- para aqueles que estiverem dentro do intervalo  entre a e b (incluindo esses) 
o programa deve escrever a soma destes valores precedida da palavra SOMA
- para os valores que estiverem fora do intervalo entre a e b o programa deve
escreve a multiplicação de todos os valores precedida da palavra MULTIPLICACAO

Exemplo: Com entradas a=5  b=12 e sequência de valores = 5; 3; 2; 7; 12;  19; 8;
O programa escreveria: 
SOMA =  32   (5+7+12+8)
MULTIPLICACAO = 114   (3*2*19)

*/
int main()
{
   int a=0, b=0, num=0, soma=0, mult=1, i=0;
   printf("Digite 2 numeros\n");
   scanf("%d %d", &a, &b);
   printf("Digite mais 7 numero\n");
   for(i=0; i<7; i++){
      scanf("%d", &num);
      if(num>=a && num<=b){
         soma += num;
      } else {
         mult *= num;
      }
   }
   printf("Soma = %d\n", soma);
   printf("Multiplicacao = %d\n", mult);
   system("pause");
}
