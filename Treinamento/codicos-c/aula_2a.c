#include <stdio.h>

int main(){
    
    float a, b, c, resultado;
    printf("Insira o dado a: \n ");
    scanf("%f", &a);
    printf("Insira o dado b: \n ");
    scanf("%f", &b);
    printf("Insira o dado c: \n ");
    scanf("%f", &c);
    resultado= (b*b) - (4 * a *c);

    printf("variavel resultado: %.2f\n", resultado);

    return 0;

   
}