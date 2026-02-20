/*
Construa uma função em linguagem C que calcule o quociente da divisão DIV, de x
por y, dois números inteiros, usando-se a seguinte definição:

DIV(x, y){   1 + DIV(|x| - |y|, |y|), se|x| > |y|  )}
         {   0, se |x| < |y|                        }
         {   1, se |x| = |y|                        }        

A função deve retornar -1 caso não seja possível realizar o cálculo. Além disso, crie
um programa que leia os dois valores inteiros e utilize a função criada para calcular o
quociente de x por y
*/

#include <stdio.h>

int DIV(int x, int y){
    int quociente;
    if(y<=0){
        quociente = -1;
    }
    else if(x == y){
        quociente = 1;
    }
    else if(x < y){
        quociente = 0;
    }
    else if(x > y){
        quociente = 1 + DIV(x - y, y);
    }
    return quociente;
}

int main(){
    int x = 100;
    int y = 2;

    int resul = DIV(x, y);
    printf("%i", resul);
    
}