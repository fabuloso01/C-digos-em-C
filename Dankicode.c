
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nasc = 1980;
    int ano_atual = 2022;

    int resultado = ano_atual - ano_nasc;

    printf("O Fábio tem %d anos", resultado);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso_atual = 85;
    float altura_atual = 1.78;

    int resultado = peso_atual / (altura_atual * altura_atual);
    
    printf(" O IMC do Fábio é %d", resultado);

    return 0;
}
*/
/*

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int hora_cinema = 20;
    int hora_atual = 20;

    if(hora_atual > hora_cinema + 30) {
        printf("Passou do tempo limite! Não pode entrar!");
    }else if (hora_atual < hora_cinema - 30) {
        printf("Nem abriu a porta do cinema"); 
    }else{
        printf("O horario está
         certo! Pode entrar!");
    }   
    

    return 0;
}
*/
/*
int main ( ) {

char letra;

printf("Entre com uma letra minuscula:\n");

scanf("%c", &letra);

letra = letra + ( 'A' - 'a' );

printf("Caractere = %c \n", letra);

return 0;

}
*/

/*
#include <stdio.h>

void main(){

char ch1, ch2;
printf("Entre com duas letras:\n");

scanf("%c %c", &ch1, &ch2);

ch1 = ch2;

ch2 = ch1;

printf("ch1 = %c e ch2 = %c\n", ch1, ch2);

}
*/

/*
#include <stdio.h>

void main(){

int num;

printf("Entre com um inteiro:\n");

scanf("%d", &num);

num = num + num%3;

printf("num = %d \n", num);

}
*/
/*
#include <stdio.h>
void main(){
printf("Hello World");
}
*/

/*
#include <stdio.h>
void main(){
printf("Primeira linha\n");
printf("Segunda linha");
}
*/

/*
#include <stdio.h>
void main(){
int a = 10;
char ch = 'Z';
printf("Atualmente, temos a = %d e ch = %c.\n", a, ch);
}
*/

/*
#include <stdio.h>
void main(){
int a, b, c;
a = 10;
b = a + 1;
c = b + 2;
printf("Atualmente, temos a = %d, b = %d e c = %d.\n", a, b, c);
}
*/
/*
#include <stdio.h>
void main(){
int a;
a = 10;
printf("A variavel a vale %d. Seu sucessor e o %d.\n", a, a + 1);
}
*/
/*
#include <stdio.h>
void main(){
char ch1, ch2, ch3;
ch1 = 'H';
ch2 = 'o';
ch3 = 'W';
printf("%cell%c %corld.\n", ch1, ch2, ch3);
}

*/
#include <stdio.h>
void main(){
float a;
a = 12.5;
printf("a = %.2f\n", a);
}