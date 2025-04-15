#include <stdio.h>

//En lo posible evitar variables globalesss
int main (int argc, char *argv[]) {
   int op;
   float a,b,res;

    op = menu();
    switch (op)
    {
    case 1:
        printf("Ingrese el num1\n");
        scanf("%f", &a);
        printf("Ingrese el num2\n");
        scanf("%f", &b);
        res = suma(a,b);
        printf("La suma es %f", res);
        break;
        //Isaac SEGUIR FASENDO
    
    default:
        break;
    }

    return op;
}

int menu(){
    int opc;
    printf("1. Suma\n");
    printf("1. Resta\n");
    printf("1. Multiplicacion\n");
    printf("4. Division\n");
    printf(">>\n");
    scanf("%d", &opc);

    return opc;
}

float suma(int a, int b)
{
    float r;
    r = a + b;
    return r;
}

float resta(float a, float b)
{
    float r;
    r = a - b;
    return r;
}

float mult(float a, float b)
{
    float r;
    r = a * b;
    return r;
}

float div(float a, float b)
{
    float res = 0;
    if (b != 0)
    { 
       res = a / b;
    }else{
        printf("No se puede dividir por cero.\n");
    }
    
    return res;
}
