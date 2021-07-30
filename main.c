/*
  Params of C/C++ Library
  Date: 21 July, 2021
  Author: Rodrigo André Rodrigues 
*/

// Lib específica de projetos
#include <stdio.h> // para usar printf  scanf and getchar
#include <stdlib.h> // para usar malloc, free and Gets

// Design Pattern recommend => Factory
void consolidando(char*, char, int, float, float);

main(){
  char* nome;
  char sexo;
  int idade;
  float peso, altura;

  nome = (char*)malloc(sizeof(char)); 
  /* 
    Compiladores diferentes podem receber diferentes comandos. Se necessário, é preciso reservar espaço de memória para a variável CHAR*
    EXEMPLO:  id = (char*)malloc(sizeof(char)*50);
  */

  printf("NOME: ");
  gets(nome); // leitura de texto
  printf("SEXO [M]asculino ou [F]eminino:");
  sexo = getchar(); // leitura de caracter
  printf("IDADE: ");
  scanf("%d", &idade); // leitura de número inteiro
  printf("PESO (em quilos): ");
  scanf("%f", &peso); // leitura de número real
  printf("ALTURA:");
  scanf("%f", &altura); // leitura de número real

  consolidando(nome, sexo, idade, peso, altura);

  free(nome);
} // First function start

void consolidando(char* n, char s, int i, float p, float a){
  printf("%s,Sexo %c, possui %d anos, pesa %.2f quilos e mede %f metros.\n", n,s,i,p,a);
}


// %.2f => equivale a 2 das 6 casas decimais existentes no params original
// \n => Quebra de linha ou caracter ENTER
/*
  char => 1 caracter
  char* => sequencia de caracter
  int => numero inteiro
  float => numero real
  void => ação vazia (ES5)
*/

/*
  printf => Texto entre aspas duplas & especificadores de formato. {
    %D => número inteiro (int)
    %F => número real (float)
    %C => caracter único (char)
    %S => Texto armazenado na memória (char*)
  }
*/

/*
  Para ler um número APÓS a leitura de um caracter, será necessário aplicar:

  ```
  scanf("\n");
  id = getchar();
  ```
*/
