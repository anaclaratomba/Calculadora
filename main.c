
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, mult, sub, num1, num2, op, resul;
    float divisao;
    
    printf("--------------");
    printf("\n CALCULADORA\n");
    printf("--------------");
    printf("\n(1) Soma");
    printf("\n(2) Divisao");
    printf("\n(3) Multiplicaçao");
    printf("\n(4) Subtraçao");
    printf("\nQual operaçao deseja: ");
    scanf("%i", &op);
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    
    soma = num1+num2;
    divisao = num1/num2;
    mult = num1 * num2;
    sub = num1 - num2;
    
    switch(op) {
        case 1:
        printf("\nA soma é: %i", soma);
        break;
        
        case 2:
        printf("\nA divisao é: %.1f", divisao);
        break;
        
        case 3:
        printf("\nA multiplicaçao é: %i", mult);
        break;
        
        case 4:
        printf("\nA subtraçao é: %i", sub);
        break;
    }
    
    printf("\nDigite 1 para continuar ou 0 para sair ");
    scanf("%i", &resul);
    
    if(resul == 1) {
        main();
    }else{
        exit;
    }
    
    return 0;
}

