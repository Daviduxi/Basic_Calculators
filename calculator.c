#include <stdio.h>

int main() {

    //definicion variables
    float numero1, numero2;
    char operacion;
    float resultado;


    //pedir el valor de los numeros
    printf("Introduce el valor del primer numero: ");
    scanf("%d", &numero1);
    printf("Introduce el valor del segundo numero: ");
    scanf("%d", &numero2);

    //pedir la operacion
    printf("Introduce la operacion deseada (+, -, *, /): ");
    scanf(" %c", &operacion);


    //funcion switch para determinar valor de resultado segun lo introducido en operacion
    switch (operacion) {
        
        //SUMA
        case '+':
            resultado = numero1 + numero2;
            printf("El resultado es: %.2f\n", resultado);
            break;
        
        //RESTA
        case '-':
            resultado = numero1 - numero2;
            printf("El resultado es: %.2f\n", resultado);
            break;
        
        // MULTIPLICACION
        case '*':
            resultado = numero1 * numero2;
            printf("El resultado es: %.2f\n", resultado);
            break;
        
        //DIVISION
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("El resultado es: %.2f\n", resultado);
            }
            else {
                printf("Error: Division por cero no permitida.\n");
            }
            break;
            
        //SI NO SE INTRODUCE OPERACION VALIDA
        default:
            printf("Operacion no valida.\n");
            break;


    }
    
    return 0;
}