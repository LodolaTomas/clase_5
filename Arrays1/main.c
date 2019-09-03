#include <stdio.h>
#include <stdlib.h>
#define T 10 //Directiva precompiladora, definir un valor que despues va a ser buscado y reemplazado en el codigo, como una constante global (pero no lo es)
/*int const T = 5; constante, un elemento que me permite defnir un valor q se mantiene durante
                   todo el ciclo del programa diferencia entre define y constante, el define es
                   en tiempo de pre compilacion, la cosntante es en tiempo de ejeccion y ocupa espacio en memoria*/
#include "funciones.h"


int main()
{
    int vectorDeNumeros[T]= {-10,-10,5,-6,-1,-4,10,5,4,-1};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;

    int minimo;
    int flag;
    int option;
    do
    {

        printf("1. Cargar  Numeros\n");
        printf("2. Mostrar Todo\n");
        printf("3. mostrar Negativos\n");
        printf("4. Mostrar Promedio Positivos\n");
        printf("5. Mostrar Maximo\n");
        printf("6. Mostrar Minimo\n");
        printf("7. Salir\n");
        printf("Eliga una opcion: ");
        scanf("%d", &option);

        //system("clear"); LINUX
        // system("cls"); WINDOWS


        switch(option)
        {
        case 1:

            cargarVector(vectorDeNumeros,T);    /*Vectores se mandan sin el [], las variables que
                                                tienen vector se pasan sin corchetes, el nombre
                                                representa la direccion del memoria
                                                del vector.*/
            break;
        case 2:
            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<T; i++)
            {
                printf("%d\n", vectorDeNumeros[i]);
            }
            break;
        case 3:
            printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<T; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                    printf("%d\n", vectorDeNumeros[i]);
                }

            }

            break;
        case 4:
            for(i=0; i<T; i++)
            {
                if(vectorDeNumeros[i]>=0)
                {
                    sumaDePositivos += vectorDeNumeros[i];
                    contadorDePositivos++;
                }
            }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

            printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);
            printf("\n\nPROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);

            break;

        case 5:

            MostrarMaximo(vectorDeNumeros,T);

            break;

        case 6:

            flag=0;
            for(i=0; i<T; i++)
            {

                if(flag==0 || vectorDeNumeros[i]<minimo)
                {
                    minimo=vectorDeNumeros[i];
                }
                flag=1;
            }
            printf("EL MINIMO: %d \n", minimo);
            for(i=0; i<T; i++)//muestro la posicion
            {
                //cuando el vector de numeros coincida con el maximo muestro la posicion " i "


                if(vectorDeNumeros[i]==minimo)
                {
                    printf("%d---",i);
                }

            }
            printf("EL MINIMO: %d \n", minimo);

            break;
        }
        system("pause");
        system("cls");

    }
    while(option!=7);


    return 0;
}
