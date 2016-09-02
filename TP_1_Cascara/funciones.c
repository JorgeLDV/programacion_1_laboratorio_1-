#include<stdio.h>

/** \brief shows the menu
 *
 * \param _1erOperando is the value of A (first operand)
 * \param _2doOperando is the value of B (second operand)
 * \return returns the selected option
 *
 */

int menu(float _1operando, float _2operando)
{
    int opcion;

    do
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n", _1operando);
        printf("2- Ingresar 2do operando (B=%.2f)\n", _2operando);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("\nSELECCIONE OPCION: ");
        scanf("%d",&opcion);

    }while(opcion<1 || opcion>9);

        return opcion;
}

/** \brief calls and read the first operand
 *
 * \param not receive any parameters
 * \param
 * \return returns numero1 (the value of first operand)
 *
 */

float PrimerOperando()
{
     float numero1;

     printf("\nIngrese primer operando: ");
     scanf("%f", &numero1);

     return numero1;
}

/** \brief calls and read the second operand
 *
 * \param not receive any parameters
 * \param
 * \return returns numero2 (the value of second operando)
 *
 */

float SegundoOperando()
{
    float numero2;

    printf("\nIngrese segundo operando: ");
    scanf ("%f", &numero2);

    return numero2;
}

/** \brief performs operations of addition
 *
 * \param x is the first operand
 * \param y is the second operand
 * \return returns the result of the operation
 *
 */

float sumar(float x, float y)
{
    float suma;
    suma = x + y;

    return suma;
}

/** \brief performs operations of subtraction
 *
 * \param x is the first operand
 * \param y is the second operand
 * \return returns the result of the operation
 *
 */

float restar(float x, float y)
{
    float resta;
    resta = x - y;

    return resta;
}

/** \brief performs operations of division
 *
 * \param x is the first operand
 * \param y is the second operand
 * \return returns the result of the operation
 *
 */
 
float dividir(float x, float y)
{
    float division;
    division= (float) x / (float) y;

    return division;
}

/** \brief performs operations of multiplication
 *
 * \param x is the first operand
 * \param y is the second operand
 * \return returns the result of the operation
 *
 */

float multiplicar(float x, float y)
{
    float multiplicacion;
    multiplicacion= x * y;

    return multiplicacion;
}

/** \brief performs factoring operates
 *
 * \param x is the first operand
 * \param
 * \return returns the result of the operation
 *
 */

float factorizar(float x)
{
    float i;
    float acum=1;

    for(i=x; i>0; i--)
    {
        acum = acum*i;
    }
    
    return acum;
}
