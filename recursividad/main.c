#include <stdio.h>
#include <stdlib.h>
///             Funciones Recursivas
/*
        funcion que se llama a si misma, la funcion 1 puede llamar a la funcion 2
        y la 2 a la 3, la funcion 1 puede tamb llamar  a la funcion 3
        calculo del factorial, creen una rutina en el main que me permita calcular
        el factorial sin recursividad, un factorial es un numero multiplicado por sus anteriores


*/
/** \brief Calcula el factorial de un numero
 *
 * \param int El numero sobre el que se factoriza
 * \return int El numero Factorizado
 *
 */
    int factorial(int);

int main()
{
    int numero;
    int resultado;
    printf("ingrese  su numero a Factorizar:");
    scanf("%d",&numero);
    resultado=factorial(numero);

    printf("Factorial es %d = %d\n", numero, resultado);
    /*
        for(i=numero;i>=1;i--){

        factorial=factorial*i;

        }
    */

///         Mejor manera de Hacerlo :)
/*
    for (i = 1; i <= numero; i++)
    {

        factorial = factorial * i;

    }
    printf("Factorial es %d = %d\n", numero, factorial);
    */




    return 0;
}
///        Otra forma de hacerlo :0
/*
        stack owerflow
        apila y desborda
        **la funcion solo puede tener un return**
        solo llega hasta 12, necesitas un long long int o un unsigned int

*/
int factorial(int numero)
{
    int resultado;

    if(numero==0){

        resultado= 1;

    }else{

        resultado= numero*factorial(numero-1);

    }
    return resultado;
}
