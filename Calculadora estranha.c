#include <stdio.h>

int main(){

int x, y, op; //Declare x, y, op numericos
float res; // Declare resultado um ponto flutuante

printf("Escreva o numero X: ");
    scanf("%d%*c", &x); // Leia o inteiro x
printf("Escreva o numero Y: ");
    scanf("%d%*c", &y); // Leia o inteiro y
printf("Qual conta quer realizar? ");
    scanf("%d%*c", &op); // Leia o operador

while(op != 0){ // Enquanto for diferente de 0 faça

    switch(op){
    case 1: //Soma
        res = x+y;
        printf("%f", res);
        break;
    case 2: // Subtração
        res = x-y;
        printf("%f", res);
        break;
    case 3: // Multiplicação
        res = x*y;
        printf("%f", res);
        break;
    case 4: // Divisão
        res = x/y;
        printf("%f", res);
        break;
    case 5: // Exponencial
        for(int i=0; i<y; i++){
            res = res + x*x;
        }
        printf("%f", res);
        break;
    case 6: // Remoção do y-ésimo dígito de x
        while(x/10){
         
        }
        printf("%d", div);
    

        
        break;
    default:
        printf("Nao conheco\n");
        break;
    }
    scanf("%d%*c", &op);
}

    return 0;
}
