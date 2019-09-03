#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vectorDeNumeros[10]= {7,-5,5,-6,-1,-4,10,5,4,-1};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag=0;

    /*
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorDeNumeros[i]);
    }*/

    printf("\tMUESTRO EL VECTOR\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }
    printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]<0)
        {
            printf("%d\n", vectorDeNumeros[i]);
        }

    }

    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]>=0)
        {
            sumaDePositivos += vectorDeNumeros[i];
            contadorDePositivos++;
        }
    }
    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


    printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);

    for(i=0; i<10; i++)
    {
        if(flag==0 || vectorDeNumeros[i]>maximo)
        {
            maximo=vectorDeNumeros[i];
        }
        if(flag==0|| vectorDeNumero[i]<minimo)
        {
            minimo=vectorDeNumeros[i];
        }
        flag=1;
    }




    printf("EL MAXIMO: %d \n", maximo);

    for(i=0; i<10; i++)//muestro la posicion
    {//cuando el vector de numeros coincida con el maximo muestro la posicion " i "

        if(vectorDeNumeros[i]==maximo)
        {
        printf("%d-",i);
        }

        if(vectorDeNumeros[i]==minimo)
        {
        printf("%d-",i);
        }

    }


    printf("EL MINIMO: %d \n", minimo);
    return 0;
}
