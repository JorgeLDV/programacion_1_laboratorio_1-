#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion;
    float operando1=0, operando2=0, resultado;
    int flagUno=0, flagDos=0;

    do
    {
        opcion = menu(operando1, operando2);

        system("cls");

        switch(opcion)
        {
            case 1:
               operando1 = PrimerOperando();
               flagUno = 1;
                break;

            case 2:
               operando2 = SegundoOperando();
               flagDos = 1;
                break;

            case 3:
                if(flagUno==1 && flagDos==1)
                {
                    resultado = sumar(operando1, operando2);
                    printf("\nEl resultado de la suma (%.02f + %.02f) es: %.02f\n", operando1, operando2, resultado);
                }

                else
                {
                    printf("\nERROR, debe ingresar dos operandos: \n");
                }
                break;

            case 4:
                if(flagUno==1 && flagDos==1)
                {
                    resultado = restar(operando1, operando2);
                    printf("\nEl resultado de la resta (%.02f - %.02f) es: %.02f\n", operando1, operando2, resultado);
                }

                else
                {
                    printf("\nERROR, debe ingresar dos operandos: \n");
                }
                break;

            case 5:
                 if(flagUno==1 && flagDos==1 && operando2!=0)
                {
                    resultado = dividir(operando1, operando2);
                    printf("\nEl resultado de la division (%.02f / %.02f) es: %.02f\n", operando1, operando2, resultado);
                }

                else
                {
                    printf("\nERROR, reingrese opcion: \n");
                }
                break;

            case 6:
                 if(flagUno==1 && flagDos==1)
                {
                    resultado = multiplicar(operando1, operando2);
                    printf("\nEl resultado de la multiplicacion (%.02f * %.02f) es: %.02f\n", operando1, operando2, resultado);
                }

                else
                {
                    printf("\nERROR, debe ingresar dos operandos: \n");
                }
                break;

            case 7:
                if(flagUno==1)
                {
                    resultado = factorizar(operando1);
                    printf("\nEl factorial de %.02f es %.02f\n", operando1, resultado);
                }
                else
                {
                    printf("\nERROR, debe ingresar dos operandos: \n");
                }
                break;

            case 8:
                if(flagUno==1)
                {
                    if(operando1!=0)
                    {
                    printf("El factorial de %.2f es %.2f\n", operando1, factorizar(operando1));
                    }
                    if(flagDos==1)
                    {
                        printf("El resultado de la suma (%.02f + %.02f) es: %.02f\n", operando1, operando2, sumar(operando1, operando2));
                        printf("El resultado de la resta (%.02f - %.02f) es: %.02f\n", operando1, operando2, restar(operando1, operando2));
                        printf("El resultado de la multiplicacion (%.02f * %.02f) es: %.02f\n", operando1, operando2, multiplicar(operando1, operando2));

                        if(operando2 != 0)
                        {
                            printf("El resultado de (%.02f / %.02f) es: %.02f\n\n\n", operando1, operando2, dividir(operando1, operando2));
                        }

                    }
                }
                else
                {
                    printf("ERROR, reingrese\n");
                }

                    system("pause");
                    system("cls");
            break;

        }

    }while(opcion != 9);

    return 0;

}
