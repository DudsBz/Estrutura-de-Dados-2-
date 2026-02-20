/*
Escreva uma função recursiva, imprimeSerie(i,j,k: inteiro), que imprime
na tela a série de valores do intervalo [i,j], com incremento k.
*/

#include <stdio.h>

void progressao(int i, int j, int k)
{
    if(i<=j)
    {
        printf("%i", i);
        return(progressao(i+k, j, k));
    }

}
int main(){

    int i = 2;
    int j = 12;
    int k = 2;

    progressao(i, j, k);
}
