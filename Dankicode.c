
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