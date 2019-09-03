#include "funciones.h"

//guardo el desarrollo de la funciones

void cargarVector(int vector[],int tam)
{
    int i;
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }


}

void MostrarMaximo(int vector[],int tam)
{
    int i;
    int maximo;

    maximo = calcularMaximo(vector,tam);


    printf("EL MAXIMO: %d \n", maximo);
    for(i=0; i<tam; i++)//muestro la posicion
    {
        //cuando el vector de numeros coincida con el maximo muestro la posicion " i "

        if(vector[i]==maximo)
        {
            printf("%d-",i);
        }

    }



}
int calcularMaximo(int vector[],int tam)
{
    int i,flag=0,maximo;

    for(i=0; i<tam; i++)
    {
        if(flag==0 || vector[i]>maximo)
        {
            maximo=vector[i];
        }

        flag=1;
    }

    return maximo;
}
void MostrarVector(int vector[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d\n", vector[i]);
    }
}


void odenarVector(int vector[],int tam)
{
int i,j;
int aux;
for(i=0;i<tam;i++)
{
    for(j=i+1;j<tam;j++)
    {
        if(vector[i]>vector[j])///criterio de ordenamiento u evaluacion, "<" mayor a menor, ">" menor a mayor.
        {
            aux=vector[i];
            vector[i]=vector[j];
            vector[j]=aux;

        }
    }
}

}

















