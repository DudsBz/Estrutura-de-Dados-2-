/*
Escreva uma função recursiva que faça o seguinte: leia um número; se o número for
negativo, a função encerra sua execução; caso contrário, a função imprime o número e
faz uma chamada recursiva a si mesma.
*/

#include <stdio.h>


void function()
{
    int num;
    pirntf("Digite um numero:\n ");
    scanf("%i", &num);
    if(num>=0)
    {
        printf("Numero: %i", num);
        function();
    }

}


int main(){
    function();
    return 1;
}